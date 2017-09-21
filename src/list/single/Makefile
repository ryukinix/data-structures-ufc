ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
LIST_ITER = list-iter
LIST_REC = list-rec
LIST_COMMON = list-common
TEST_TARGET = test
INCLUDE = -I../../

# object-code
TARGETS = $(LIST_REC).o
TARGETS += $(LIST_COMMON).o
# TARGETS += $(LIST_ITER).o
TARGETS += $(TEST_TARGET).o


# linking test binary
LIST_OBJ = $(LIST_REC).o
OBJS += $(LIST_OBJ)
OBJS += $(LIST_COMMON).o
OBJS += $(TEST_TARGET).o
TEST_BINARY = $(TEST_TARGET).$(EXTENSION)

# static library
LIBRARY_TARGET = liblist.a
LIBRARY_OBJS = $(LIST_COMMON).o $(LIST_OBJ)

all: compile
	@echo > /dev/null

compile: $(TARGETS)

%.o: %.c
	$(CC) $(INCLUDE) -c $(LFLAGS) -o $@ $<

$(TEST_BINARY): $(TARGETS) $(TEST_TARGET).c
	$(CC) $(INCLUDE) $(LFLAGS) -o $@ $(OBJS)

test: $(TARGETS) $(TEST_BINARY)
	./$(TEST_BINARY)

$(LIBRARY_TARGET): $(LIBRARY_OBJS)
	ar rcs $@ $?

library: $(LIBRARY_TARGET)

clean:
	rm -fv *.o *.out *.a

.PHONY: all clean compile
