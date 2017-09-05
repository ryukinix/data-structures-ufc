CXX = gcc
LFLAGS = -pedantic -lm -Wall -Wextra
TARGET = point
OBJ = $(TARGET).o
SRC = $(TARGET).c

all: compile

compile: $(OBJ)

$(OBJ): $(SRC)
	$(CXX) -c $(LFLAGS) -o $@ $?

clean:
	rm -fv *.o

.PHONY: clean
