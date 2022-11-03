# the compiler: gcc for C program, define as g++ for C++
CC = g++
# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

# the build target executable:
PROGRAM = src/Main
TARGET  = bin/Main

all: $(TARGET)

$(TARGET): $(PROGRAM).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(PROGRAM).cpp

clean:
	$(RM) $(TARGET)