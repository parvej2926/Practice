
# Compiler and flags
CC = g++
C = gcc
CFLAGS = -Wall -Wextra -g -std=c++11

# Source files and output
SRC = jarched.cpp
OUT = jarched
SRC1 = factorial.c
OUT1 = factorial
PLOT = plot.plt
PLOT_OUT = sin_cos_x.png
O = open

# Targets
all: $(OUT) $(PLOT_OUT) $(OUT1)

jarched: jarched.cpp
	g++ jarched.cpp -o jarched

$(OUT1): $(SRC1)
	$(C) $(SRC1) -o $(OUT1)

$(PLOT_OUT): $(PLOT)
	gnuplot $(PLOT)

run: jarched
	./jarched
run1: $(OUT1)
	./$(OUT1)
run2: $(PLOT_OUT)
	$(O) $(PLOT_OUT)
	@echo "Plot generated: $(PLOT_OUT)"
clean:
	rm -f $(OUT)
	rm -f $(OUT1)
	rm -f $(PLOT_OUT)
