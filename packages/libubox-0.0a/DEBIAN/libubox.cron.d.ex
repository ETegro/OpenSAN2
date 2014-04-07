#
# Regular cron jobs for the libubox package
#
0 4	* * *	root	[ -x /usr/bin/libubox_maintenance ] && /usr/bin/libubox_maintenance
