#
# Regular cron jobs for the flashcache-modules package
#
0 4	* * *	root	[ -x /usr/bin/flashcache-modules_maintenance ] && /usr/bin/flashcache-modules_maintenance
