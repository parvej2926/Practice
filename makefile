# Compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -g -std=c++11

# Source files and output
SRC = jarched.cpp
OUT = jarched
SRC1 = 1.cpp
OUT1 = one
SRC2 = 2.cpp
OUT2 = two

# Targets
all: $(OUT) $(OUT1) $(OUT2)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

$(OUT1): $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(OUT1)

$(OUT2): $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(OUT2)

# Run targets
run: $(OUT)
	./$(OUT) >> run.txt && bat run.txt && rm -f $(OUT)

run1: $(OUT1)
	./$(OUT1)

run2: $(OUT2)
	./$(OUT2)

# Clean build files
clean:
	rm -f $(OUT) $(OUT1) $(OUT2)
