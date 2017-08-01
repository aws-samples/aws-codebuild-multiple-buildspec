IDIR=include
CC=gcc
FLAGS= -I$(IDIR)
CFLAGS= -c -fPIC
LFLAGS= -shared

LDIR=lib

LIBS=-lm

DEPS = cbsamplelib.h

all: lib util

lib:
	$(CC) $(CFLAGS) cbsamplelib.c
	$(CC) $(LFLAGS) -o libcbsamplelib.so cbsamplelib.o

util: lib
	mkdir -p include
	mkdir -p lib
	cp libcbsamplelib.so ./lib/
	cp $(DEPS) ./include/
	$(CC) $(FLAGS) -L $(LDIR) -o cbsampleutil cbsampleutil.c -lcbsamplelib $(LIBS)

clean:
	rm -f $(LDIR)/*.so $(IDIR)/*.h cbsamplelib.o cbsampleutil
	rm -rf $(IDIR) $(LDIR)
