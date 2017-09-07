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

OBJS += $(POINT)
OBJS += $(CIRCLE)
OBJS += $(MATRIX)
OBJS += $(MATRIX_UTILS)
OBJS += $(TARGET).o


all: generate-binary
	@echo > /dev/null

deps:
	@+$(MAKE) --no-print-directory -C point
	@+$(MAKE) --no-print-directory -C circle
	@+$(MAKE) --no-print-directory -C matrix

$(TARGET).o: $(TARGET).c
	$(CC) -c -o $(TARGET).o $(TARGET).c

$(TARGET:=.$(EXTENSION)): $(TARGET).c
	$(CC) $(LFLAGS) $(OBJS) -o $@

compile: $(TARGET).o

generate-binary: deps compile $(TARGET:=.$(EXTENSION))

clean:
	rm -rfv *.out *.o

# clean the dependencies too
clean-all: clean
	+${MAKE} clean -C point
	+${MAKE} clean -C circle
	+${MAKE} clean -C matrix

run: generate-binary
	./$(TARGET).$(EXTENSION)

.PHONY: clean clean-all all
