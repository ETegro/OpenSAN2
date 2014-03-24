#
# Regular cron jobs for the scstadmin package
#
0 4	* * *	root	[ -x /usr/bin/scstadmin_maintenance ] && /usr/bin/scstadmin_maintenance
