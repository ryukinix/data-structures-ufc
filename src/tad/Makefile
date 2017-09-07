ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC= gcc
LFLAGS = -g -pedantic -lm -Wall -Wextra
TARGET = main
CIRCLE = circle/circle.o
MATRIX_POINTER = matrix/matrix-pointer.o
MATRIX_VECTOR = matrix/matrix-vector.o
MATRIX_UTILS = matrix/matrix-utils.o
MATRIX = $(MATRIX_POINTER)
POINT = point/point.o

OBJS = main.o
OBJS += $(POINT)
OBJS += $(CIRCLE)
OBJS += $(MATRIX)
OBJS += $(MATRIX_UTILS)

all: compile link

deps:
	@$(MAKE) -C point
	@$(MAKE) -C circle
	@$(MAKE) -C matrix

compile:
	$(CC) -c -o $(TARGET).o $(TARGET).c

link: compile deps
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET).$(EXTENSION)

clean:
	rm -rfv *.out *.o

clean-all: clean
	@${MAKE} clean -C point
	@${MAKE} clean -C circle
	@${MAKE} clean -C matrix

run: link
	./$(TARGET).$(EXTENSION)

.PHONY: clean clean-all
