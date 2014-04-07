#
# Regular cron jobs for the scst-dkms package
#
0 4	* * *	root	[ -x /usr/bin/scst-dkms_maintenance ] && /usr/bin/scst-dkms_maintenance
