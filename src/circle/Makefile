ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC=gcc
CFLAGS=-lm -Wall -g
SOURCES=circle.c main.c point.c
TARGET=main.$(EXTENSION)
INCLUDE=-I../

all: compile

$(TARGET): $(SOURCES)
	$(CC) $(INCLUDE) $(CFLAGS) $(SOURCES) -o $(TARGET)

compile: $(TARGET)

run:
	./$(TARGET)

clean:
	rm -v $(TARGET) || del $(TARGET)

.PHONY: compile run all clean
