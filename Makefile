
VPATH = src
SRC = page_table.c page_entry.c main.c
OBJ = $(SRC:.c=.o)
BIN = paging

ALL_CFLAGS = -Iinclude -O2 $(CFLAGS)
HEADERS =$(shell ls include/* )

.PHONY = all clean distclean

%.o: %.c $(HEADERS)
	$(CC) $(ALL_CFLAGS) -c $< -o $@

all: $(OBJ)

	$(CC) $(OBJ) -o paging


clean:
	rm -f *.o $(BIN)

distclean: clean