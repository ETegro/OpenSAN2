#
# Regular cron jobs for the uhttpd package
#
0 4	* * *	root	[ -x /usr/bin/uhttpd_maintenance ] && /usr/bin/uhttpd_maintenance
