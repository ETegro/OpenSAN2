#
# Regular cron jobs for the flashcache-utils package
#
0 4	* * *	root	[ -x /usr/bin/flashcache-utils_maintenance ] && /usr/bin/flashcache-utils_maintenance
