# Compiler and flags
CC = gcc
CFLAGS = -Wall -std=c99

# Object files
OBJ = big3.o fact.o rev.o swap.o main.o

# Executable output
TARGET = main

# Default target to build the executable
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Rule for compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up the generated files
clean:
	rm -f $(OBJ) $(TARGET)


