local pcall, dofile, _G = pcall, dofile, _G

module "luci.version"

if pcall(dofile, "/etc/openwrt_release") and _G.DISTRIB_DESCRIPTION then
	distname    = ""
	distversion = _G.DISTRIB_DESCRIPTION
else
	distname    = "OpenSAN2"
	distversion = "ub-14.04-alpha_pre1"
end

luciname    = ""
luciversion = "Tue Jul 23 16:23:51 2013 +0400"
