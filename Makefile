
VPATH = src
SRC = page_table.c page_entry.c
OBJ = $(SRC:.c=.o)
BIN = paging

TESTS = $(shell ls tests/*.c)

ALL_CFLAGS = -Iinclude -O2 $(CFLAGS)
HEADERS =$(shell ls include/* )

.PHONY = all clean distclean

%.o: %.c $(HEADERS)
	$(CC) $(ALL_CFLAGS) -c $< -o $@

all: $(OBJ) main.o

	$(CC) $(OBJ) -o paging

clean:
	rm -f *.o $(BIN)

distclean: clean

tests: $(OBJ) $(TESTS:.c=.o)
	$(CC) tests/page_table_init.o $(OBJ) -o page_table_init
