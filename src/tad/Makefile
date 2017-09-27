ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC= gcc
CFLAGS = -g -pedantic -Wall -Wextra
LDFLAGS = -lm
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
	$(CC) $(CFLAGS) -c -o $(TARGET).o $(TARGET).c $(LDFLAGS)

$(TARGET:=.$(EXTENSION)): $(TARGET).c
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

compile: $(TARGET).o

generate-binary: deps compile $(TARGET:=.$(EXTENSION))

clean:
	rm -rfv *.$(EXTENSION) *.o
	+${MAKE} clean -C point
	+${MAKE} clean -C circle
	+${MAKE} clean -C matrix

run: generate-binary
	./$(TARGET).$(EXTENSION)

.PHONY: clean clean-all all
