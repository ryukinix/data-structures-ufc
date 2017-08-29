CC=gcc
CFLAGS=-lm -Wall
SOURCES=circle.c main.c point.c
TARGET=main.exe

all: compile run

compile:
	@echo Compiling source...
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run:
	@echo Running...
	./$(TARGET)

clean:
	@echo Cleaning up...
	rm -v $(TARGET) || del $(TARGET)
