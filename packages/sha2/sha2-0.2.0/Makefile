world: all

compile:
	gcc -O2 -fPIC -I/usr/include/lua5.1 -c sha2.c -o sha2.o -DSHA2_USE_INTTYPES_H -DBYTE_ORDER -DLITTLE_ENDIAN -I.
	gcc -O2 -fPIC -I/usr/include/lua5.1 -c sha2lib.c -o sha2lib.o -DSHA2_USE_INTTYPES_H -DBYTE_ORDER -DLITTLE_ENDIAN -I.
	gcc -shared -o sha2.so -L/usr/lib sha2.o sha2lib.o

install:
	cp sha2.so /usr/lib/lua/

uninstall:
	rm -f /usr/lib/sha2.so
	rm -f /usr/lib/lua/sha2.so

all: compile
