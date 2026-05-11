
VPATH = src
SRC = page_table.c page_entry.c main.c
OBJ = $(SRC:.c=.o)
BIN = paging

.PHONY = all clean distclean

all: $(OBJ)

	$(CC) $(OBJ) -o paging


clean:
	rm -f *.o $(BIN)

distclean: clean