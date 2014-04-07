#
# Regular cron jobs for the sha2 package
#
0 4	* * *	root	[ -x /usr/bin/sha2_maintenance ] && /usr/bin/sha2_maintenance
