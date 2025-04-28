
# Compiler and flags
CC = g++
C = gcc
CFLAGS = -Wall -Wextra -g -std=c++11

# Source files and output
SRC = jarched.cpp
OUT = jarched
SRC1 = 1.cpp
OUT1 = 1
SRC2 = 2.cpp
OUT2 = 2

# Targets
all: $(OUT) $(OUT2) $(OUT1)

$(OUT): $(SRC)
	$(CC) $(SRC) -o $(OUT)


$(OUT1): $(SRC1)
	$(C) $(SRC1) -o $(OUT1)


run: $(OUT)
	./$(OUT)
run1: $(OUT1)
	./$(OUT1)
clean:
	rm -f $(OUT)
	rm -f $(OUT1)
