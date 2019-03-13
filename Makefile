CC = gcc
WARN = -Wall -Wextra
DEBUG ?= -g
CFLAGS = $(DEBUG) -pedantic $(WARN) -std=c99 -fPIC
SOURCES = $(shell find src/ -iname '*.c')
BLACKLIST = "(list-iter|main|test).c|avl|*.-static*.|vector-struct|matrix-"
LIB_SOURCES = $(shell echo $(SOURCES) | tr ' ' '\n' | grep -E -v $(BLACKLIST))
LIB_OBJECTS = $(shell echo $(LIB_SOURCES) | tr ' ' '\n' | sed "s/\.c/\.o/")
INCLUDE=-I./src/
LIBNAME = libds-ufc
LIBDIR = lib
LIBPATH = $(LIBDIR)/$(LIBNAME)

all: compile

sources:
	echo $(LIB_SOURCES) | tr ' ' '\n'

compile: $(LIB_OBJECTS)
	@echo Compiled!

%.o: %.c
	$(CC) -c -o $@ $(INCLUDE) $(CFLAGS) "$<"

clean:
	rm -vrf $(LIB_OBJECTS)

static: $(LIBDIR)/$(LIBNAME).a
shared: $(LIBDIR)/$(LIBNAME).so

$(LIBPATH).a: $(LIB_OBJECTS)
	mkdir -p $(LIBDIR)
	ar rcs $@ $(LIB_OBJECTS)

$(LIBPATH).so: $(LIB_OBJECTS)
	mkdir -p $(LIBDIR)
	gcc -o $@ -shared $(LIB_OBJECTS)





.PHONY: clean
