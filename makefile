# Compiler and flags
CC = g++
CF = -Wall -Wextra -g -std=c++11

# Source files and output
P = jarched.cpp
O = jarched
SRC1 = 1.cpp
OUT1 = one
SRC2 = 2.cpp
OUT2 = two

# Targets
all: $(O) $(OUT1) $(OUT2)

$(O): jarched.cpp
	$(CC) $(CF) $(P) -o $(O)
	#g++ jarched.cpp -o jarchedgit
$(OUT1): $(SRC1)
	$(CC) $(CF) $(SRC1) -o $(OUT1)

$(OUT2): $(SRC2)
	$(CC) $(CF) $(SRC2) -o $(OUT2)

# Run targets
parvez: $(O)
	./$(O) >> run.txt && bat run.txt && rm -f $(O)

run1: $(OUT1)
	./$(OUT1)

run2: $(OUT2)
	./$(OUT2)

# Clean build files
clean:
	rm -f $(O) $(OUT1) $(OUT2)
