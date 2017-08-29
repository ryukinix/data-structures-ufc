ifeq ($(OS),Windows_NT)
	EXTENSION := exe
else
	EXTENSION := out
endif

CC=gcc
CFLAGS=-lm -Wall -g
SOURCES=circle.c main.c point.c
TARGET=main.$(EXTENSION)

all: compile

compile:
	@echo Compiling source...
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run:
	@echo Running...
	./$(TARGET)

clean:
	@echo Cleaning up...
	rm -v $(TARGET) || del $(TARGET)
