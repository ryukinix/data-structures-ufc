ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
LIST_CIRCULAR = list-circular
TEST_TARGET = test
INCLUDE = -I../../

# object-code
TARGETS = $(LIST_CIRCULAR).o
TARGETS += $(TEST_TARGET).o


# linking test binary
LIST_OBJ = $(LIST_CIRCULAR).o
OBJS += $(LIST_CIRCULAR).o
OBJS += $(TEST_TARGET).o
TEST_BINARY = $(TEST_TARGET).$(EXTENSION)

# static library
LIBRARY_TARGET = liblistcircular.a
LIBRARY_OBJS = $(LIST_CIRCULAR)

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
	rm -fv *.o *.$(EXTENSION) *.a

.PHONY: all clean compile
