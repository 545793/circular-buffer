
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I inc
TARGET = build/main.exe
SOURCES = src/main.c src/circular_buffer.c

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	powershell -Command "if (Test-Path build) { Remove-Item build/* -Force }"
