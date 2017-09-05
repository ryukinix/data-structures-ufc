CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
TARGET = circle
OBJ = $(TARGET).o
SRC = $(TARGET).c

all: compile

compile: $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(LFLAGS) -o $@ $?

clean:
	rm -fv *.o

.PHONY: clean
