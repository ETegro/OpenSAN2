local pcall, dofile, _G = pcall, dofile, _G

module "luci.version"

if pcall(dofile, "/etc/openwrt_release") and _G.DISTRIB_DESCRIPTION then
	distname    = ""
	distversion = _G.DISTRIB_DESCRIPTION
else
	distname    = "OpenSAN2"
	distversion = "V2.4.2-FS100G3"
end

luciname    = ""
luciversion = "Tue Jul 23 16:23:51 2013 +0400"
