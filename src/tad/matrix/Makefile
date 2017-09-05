CC = gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
MATRIX_POINTER = matrix-pointer
MATRIX_VECTOR = matrix-vector
MATRIX_PRINT = matrix_print
TARGETS = $(MATRIX_POINTER).o $(MATRIX_VECTOR).o $(MATRIX_PRINT).o

all: compile

compile: $(TARGETS)

$(MATRIX_POINTER:=.o): $(MATRIX_POINTER).c
$(MATRIX_VECTOR:=.o): $(MATRIX_VECTOR).c
$(MATRIX_PRINT:=.o): $(MATRIX_PRINT).c

$(TARGETS):
	$(CC) -c $(LFLAGS) -o $@ $?

clean:
	rm -fv *.o

.PHONY: clean
