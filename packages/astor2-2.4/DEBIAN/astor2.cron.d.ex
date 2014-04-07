#
# Regular cron jobs for the astor2 package
#
0 4	* * *	root	[ -x /usr/bin/astor2_maintenance ] && /usr/bin/astor2_maintenance
