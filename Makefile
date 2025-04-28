CC = gcc
CFLAGS = -Wall -Wextra -std=c23
SRC = src/tty.c main.c
INCLUDE = include
OUT = shellc


#all: compile run


compile:
	$(CC) $(SRC) -o $(OUT) -I $(INCLUDE) $(CFLAGS)

run:
	./$(OUT)
	

clean:
	rm -rf $(OUT)
