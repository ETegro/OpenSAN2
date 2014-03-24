#
# Regular cron jobs for the scst package
#
0 4	* * *	root	[ -x /usr/bin/scst_maintenance ] && /usr/bin/scst_maintenance
