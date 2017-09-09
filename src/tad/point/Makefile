CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
TARGET = point
OBJ = $(TARGET).o
SRC = $(TARGET).c
INCLUDE = -I../../

all: compile
	@echo > /dev/null

compile: $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(INCLUDE) -c $(LFLAGS) -o $@ $?

clean:
	rm -fv *.o

.PHONY: all clean compile
