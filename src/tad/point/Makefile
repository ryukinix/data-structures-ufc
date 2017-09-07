CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
TARGET = point
OBJ = $(TARGET).o
SRC = $(TARGET).c

all: compile
	@echo > /dev/null

compile: $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(LFLAGS) -o $@ $?

clean:
	rm -fv *.o

.PHONY: clean all
