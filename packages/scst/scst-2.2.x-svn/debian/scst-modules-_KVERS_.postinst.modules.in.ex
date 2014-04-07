#!/bin/sh
# postinst script for modules package built from scst

set -e

# summary of how this script can be called:
#        * <postinst> `configure' <most-recently-configured-version>
#        * <old-postinst> `abort-upgrade' <new version>
#        * <conflictor's-postinst> `abort-remove' `in-favour' <package>
#          <new-version>
#        * <postinst> `abort-remove'
#        * <deconfigured's-postinst> `abort-deconfigure' `in-favour'
#          <failed-install-package> <version> `removing'
#          <conflicting-package> <version>
# for details, see http://www.debian.org/doc/debian-policy/ or
# the debian-policy package

case "$1" in
    configure)
        if [ -x /usr/sbin/update-devfsd ] ; then
            /usr/sbin/update-devfsd 2>/dev/null || true
        fi
		# Install the modules below
        modprobe scst-foo 2>/dev/null || modprobe scst-bar 2>/dev/null || true
        # start or restart after install or upgrade
		# Tests to see if the binary exists first
        if test -x /usr/sbin/scst ; then
		  invoke-rc.d scst start || true
        fi
    ;;

    abort-upgrade|abort-remove|abort-deconfigure)
    ;;

    *)
        echo "postinst called with unknown argument \`$1'" >&2
        exit 1
    ;;
esac

# dh_installdeb will replace this with shell code automatically
# generated by other debhelper scripts.

#DEBHELPER#

exit 0
