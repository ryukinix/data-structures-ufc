ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC = gcc
WARN = -Wall -Wextra
DEBUG = -g
override CFLAGS = $(DEBUG) -pedantic $(WARN) -std=c99
LDFLAGS = -lm
INCLUDE = -I../

# targets to compile
TEST_TARGET = test
MAIN_TARGET = main
TARGETS = quicksort.o bubblesort.o heapsort.o mergesort.o insertionsort.o utils.o
LIBRARY_OBJS = TARGETS

TEST_BINARY = $(TEST_TARGET).$(EXTENSION)
MAIN_BINARY = $(MAIN_TARGET).$(EXTENSION)

# static library
LIBRARY_TARGET = libsort.a

all: compile
	@echo > /dev/null

compile: $(TARGETS)

%.o: %.c
	$(CC) $(INCLUDE) -c $(CFLAGS) -o $@ $<

$(TEST_BINARY): $(TARGETS) $(TEST_TARGET).c
	$(CC) $(INCLUDE) $(CFLAGS) -o $@ $(TARGETS) $(TEST_TARGET).o $(LDFLAGS)

$(MAIN_BINARY): $(TARGETS) $(MAIN_TARGET).c
	$(CC) $(INCLUDE) $(CFLAGS) -o $@ $(TARGETS) $(MAIN_TARGET).o  $(LDFLAGS)

test: $(TARGETS) $(TEST_BINARY)
	./$(TEST_BINARY)

main: $(TARGETS) $(MAIN_BINARY)
	./$(MAIN_BINARY)

$(LIBRARY_TARGET): $(LIBRARY_OBJS)
	ar rcs $@ $?

library: $(LIBRARY_TARGET)

clean:
	rm -fv *.o *.$(EXTENSION) *.a

.PHONY: all clean compile test
