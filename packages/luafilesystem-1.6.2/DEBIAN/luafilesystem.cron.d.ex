#
# Regular cron jobs for the luafilesystem package
#
0 4	* * *	root	[ -x /usr/bin/luafilesystem_maintenance ] && /usr/bin/luafilesystem_maintenance
