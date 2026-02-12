CC = gcc

CFLAGS = -O2 -Wall -Wextra -Werror -pedantic

ifeq ($(OS),Windows_NT)
    TARGET = super_trunfo.exe
    RM = del
else
    TARGET = super_trunfo
    RM = rm -f
endif

SRC = super_trunfo.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	$(RM) $(TARGET)

re: clean all

.PHONY: all clean re
