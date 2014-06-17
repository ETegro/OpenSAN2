--[[
LuCI - Lua Configuration Interface

Copyright 2008 Steven Barth <steven@midlink.org>
Copyright 2011 Jo-Philipp Wich <xm@subsignal.org>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

$Id: status.lua 7025 2011-05-04 21:23:55Z jow $
]]--
module("luci.controller.admin.status", package.seeall)
common = require "astor2.common"


function index()
	luci.i18n.loadc("base")
	local i18n = luci.i18n.translate

	entry({"admin", "status"}, alias("admin", "status", "overview"), i18n("Status"), 20).index = true
	entry({"admin", "status", "overview"}, template("admin_status/index"), i18n("Overview"), 1)
--	entry({"admin", "status", "iptables"}, call("action_iptables"), i18n("Firewall"), 2).leaf = true
	entry({"admin", "status", "routes"}, template("admin_status/routes"), i18n("Routes"), 3)
	entry({"admin", "status", "syslog"}, call("action_syslog"), i18n("System Log"), 4)
	entry({"admin", "status", "dmesg"}, call("action_dmesg"), i18n("Kernel Log"), 5)

	entry({"admin", "status", "plots"}, call("action_plots"), i18n("Plots"), 2)
	--entry({"admin", "status", "load"}, template("admin_status/load"), i18n("Realtime Load"), 6).leaf = true
	--entry({"admin", "status", "load_status"}, call("action_load")).leaf = true

	--entry({"admin", "status", "bandwidth"}, template("admin_status/bandwidth"), i18n("Realtime Traffic"), 7).leaf = true
	--entry({"admin", "status", "bandwidth_status"}, call("action_bandwidth")).leaf = true

	--[[
	entry({"admin", "status", "connections"}, template("admin_status/connections"), i18n("Realtime Connections"), 8).leaf = true
	entry({"admin", "status", "connections_status"}, call("action_connections")).leaf = true
	]]--

	entry({"admin", "status", "processes"}, cbi("admin_status/processes"), i18n("Processes"), 20)
end

function action_syslog()
	local syslog = luci.sys.syslog()
	luci.template.render("admin_status/syslog", {syslog=syslog})
end

hostname = luci.sys.hostname()
function action_plots()

local lfs = require"lfs"

local f = io.popen("grep 'physical id' /proc/cpuinfo | wc -l") 
cpunum=string.gsub (f:read("*a") , '\n', '')


local f = io.popen("grep 'physical id' /proc/cpuinfo | uniq | wc -l") 
countproc=string.gsub (f:read("*a") , '\n', '')

core=0


for i=0,cpunum-1 do
  local cpu = " rrdtool graph /var/www/luci-static/resources/cpu".. i ..".png " .. 
            " -e now " .. 
            " -s 'end - 6 hours' " ..
            " -S 60" ..  
            " --title 'CORE-" .. core.." USAGE'" .. 
            " --vertical-label 'Percents' " ..
            " --imgformat PNG"..
            " --slope-mode" ..
            " --lower-limit 0 " .. 
            " --upper-limit 100 " .. 
            " --rigid " ..
            " -E " .. 
            " -i " .. 
            " --color CANVAS#8D8D8D " ..
            " --color SHADEA#FFFFFF " ..
            " --color SHADEB#FFFFFF " .. 
            " --color BACK#CCCCCC" .. 
            " -w 500 " .. 
            " -h 300 " .. 
            " --interlaced" .. 
            " DEF:c=/var/lib/collectd/rrd/" .. hostname .. "/cpu-"..i.."/cpu-idle.rrd:value:MAX" ..  
            " DEF:b=/var/lib/collectd/rrd/" .. hostname .. "/cpu-"..i.."/cpu-system.rrd:value:MAX" .. 
            " DEF:a=/var/lib/collectd/rrd/" .. hostname .. "/cpu-"..i.."/cpu-user.rrd:value:MAX" .. 
            " AREA:c#F7FF00:Idle " ..
            " LINE1:a#200320: AREA:a#540048:User " ..
            " LINE1:b#2cc320: AREA:b#54eb48:System " ..
            " >>/dev/null 2>>/dev/null;" 

common.system(cpu);

core=core+1

if (core==cpunum/countproc) then
    core=0
end


end

local totalmem = "cat /proc/meminfo | grep MemTotal | awk '{print $2}'"
local freemem = "cat /proc/meminfo | grep MemFree | awk '{print $2}'"
local f = io.popen(totalmem) 
tmem=string.gsub (f:read("*a") , '\n', '')
local f = io.popen(freemem) 
fmem=string.gsub (f:read("*a") , '\n', '')

local mem = "rrdtool graph /var/www/luci-static/resources/memory.png" .. 
            " -e now " .. 
            " -s 'end - 6 hours'" ..   
            " -S 60 " ..
            " --title 'MEMORY USAGE'"..  
            " --imgformat PNG " ..
            " --slope-mode " ..   
            " --lower-limit 0 " ..
            " --upper-limit ".. tmem.."000 " .. 
            " --base=1024 "..
            " --rigid "..
            " -E "..
            " -i "..
            " --color SHADEA#FFFFFF " .. 
            " --color SHADEB#FFFFFF " .. 
            " --color BACK#CCCCCC " ..
            " -w 400 " .. 
            " -h 300 " ..
            " --interlaced " ..   
            --" --color CANVAS#2cD320 " ..
            " DEF:mcached=/var/lib/collectd/rrd/" .. hostname .. "/memory/memory-cached.rrd:value:MAX " ..  
            " DEF:mbuff=/var/lib/collectd/rrd/" .. hostname .. "/memory/memory-buffered.rrd:value:MAX " ..  
            " DEF:mused=/var/lib/collectd/rrd/" .. hostname .. "/memory/memory-used.rrd:value:MAX " ..  
            " DEF:mfree=/var/lib/collectd/rrd/" .. hostname .. "/memory/memory-free.rrd:value:MAX " ..  
            " CDEF:buff=mused,mbuff,+ "..
            " CDEF:cached=buff,mcached,+ "..
            " CDEF:free=cached,mfree,+ "..
            " COMMENT:'\\n' " ..
            " LINE1:free#00FF00: AREA:free#00FF00:'Free memory' " .. 
            " LINE1:cached#5500cc: AREA:cached#5500cc:'Cached memory' " .. 
            " LINE1:buff#0000FF: AREA:buff#0000FF:'Buffered memory' " .. 
            " LINE1:mused#FF0055: AREA:mused#aa0000:'Used memory' " .. 
            " COMMENT:'\\n' " ..
            " COMMENT:'FreeMem ".. string.format("%.3f", fmem/1024/1024) .." Gb' " ..
            " COMMENT:'\\n' " ..
            " COMMENT:'TotalMem ".. string.format("%.3f", tmem/1024/1024) .." Gb' " ..
            " >>/dev/null 2>>/dev/null; "


local net = "rrdtool graph /var/www/luci-static/resources/network.png "..
            " -e now " ..
            " -s 'end - 6 hours' " ..
            " -S 60 "..
            " --title 'TRAFFIC' "..
            " --vertical-label 'Packets/s' "..
            " --imgformat PNG "..
            " --slope-mode   "..
            " --lower-limit 0 "..
            --" --upper-limit 110000000 "..
            " --no-legend " ..
            " -M "..
            " --rigid "..
            " -E "..
            " -i "..
            " --color SHADEA#FFFFFF "..
            " --color SHADEB#FFFFFF "..
            " --color BACK#CCCCCC "..
            " -w 400 "..
            " -h 300 "..
            " --interlaced "..
            " DEF:a=/var/lib/collectd/rrd/".. hostname .."/interface-eth0/if_packets.rrd:tx:MAX "..
            " DEF:b=/var/lib/collectd/rrd/".. hostname .."/interface-eth0/if_octets.rrd:rx:MAX "..
            " DEF:c=/var/lib/collectd/rrd/".. hostname .."/interface-eth0/if_errors.rrd:tx:MAX "..
            " LINE2:a#0000CD: "..
            " AREA:a#4169E1:Tx-transmited "..
            " LINE2:b#2cc320: "..
            " AREA:b#54eb48:Rx-receive "..
            " LINE1:c#FF0000:Errors" .. 
            " >>/dev/null 2>>/dev/null;"

    common.system(mem);
    common.system(net);
    
	luci.template.render("admin_status/plots", {cpunum=cpunum,countproc=countproc})
end

function action_dmesg()
	local dmesg = luci.sys.dmesg()
luci.template.render("admin_status/dmesg", {dmesg=dmesg})
end

function action_iptables()
	if luci.http.formvalue("zero") then
		if luci.http.formvalue("zero") == "6" then
			luci.util.exec("ip6tables -Z")
		else
			luci.util.exec("iptables -Z")
		end
		luci.http.redirect(
			luci.dispatcher.build_url("admin", "status", "iptables")
		)
	elseif luci.http.formvalue("restart") == "1" then
		luci.util.exec("/etc/init.d/firewall restart")
		luci.http.redirect(
			luci.dispatcher.build_url("admin", "status", "iptables")
		)
	else
		luci.template.render("admin_status/iptables")
	end
end

--[[
function action_bandwidth()
	local path  = luci.dispatcher.context.requestpath
	local iface = path[#path]

	local fs = require "luci.fs"
	if fs.access("/var/lib/luci-bwc/if/%s" % iface) then
		luci.http.prepare_content("application/json")

		local bwc = io.popen("luci-bwc -i %q 2>/dev/null" % iface)
		if bwc then
			luci.http.write("[")

			while true do
				local ln = bwc:read("*l")
				if not ln then break end
				luci.http.write(ln)
			end

			luci.http.write("]")
			bwc:close()
		end

		return
	end

	luci.http.status(404, "No data available")
end
]]

function action_load()
	local fs = require "luci.fs"
	if fs.access("/var/lib/luci-bwc/load") then
		luci.http.prepare_content("application/json")

		local bwc = io.popen("luci-bwc -l 2>/dev/null")
		if bwc then
			luci.http.write("[")

			while true do
				local ln = bwc:read("*l")
				if not ln then break end
				luci.http.write(ln)
			end

			luci.http.write("]")
			bwc:close()
		end

		return
	end

	luci.http.status(404, "No data available")
end

function action_connections()
	local fs  = require "luci.fs"
	local sys = require "luci.sys"

	luci.http.prepare_content("application/json")

	luci.http.write("{ connections: ")
	luci.http.write_json(sys.net.conntrack())

	if fs.access("/var/lib/luci-bwc/connections") then
		local bwc = io.popen("luci-bwc -c 2>/dev/null")
		if bwc then
			luci.http.write(", statistics: [")

			while true do
				local ln = bwc:read("*l")
				if not ln then break end
				luci.http.write(ln)
			end

			luci.http.write("]")
			bwc:close()
		end
	end

	luci.http.write(" }")
end
