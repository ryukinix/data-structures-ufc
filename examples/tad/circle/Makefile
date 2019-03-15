ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC=gcc
CFLAGS=-Wall -Wextra -g
LDFLAGS=-lm
SOURCES=circle.c main.c point.c
TARGET=main.$(EXTENSION)
INCLUDE=-I../../../src

all: compile

$(TARGET): $(SOURCES)
	$(CC) $(INCLUDE) $(CFLAGS) $(SOURCES) -o $(TARGET) $(LDFLAGS)

compile: $(TARGET)

run: compile
	./$(TARGET)

clean:
	rm -fv $(TARGET) || del $(TARGET)

.PHONY: compile run all clean
