CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
TARGET = circle
OBJ = $(TARGET).o
SRC = $(TARGET).c

all: compile
	@echo > /dev/null

compile: $(OBJ)

%.o: %.c
	$(CC) -c $(LFLAGS) -o $@ $?

clean:
	rm -fv *.o

.PHONY: clean
