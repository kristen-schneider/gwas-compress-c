BIN=../bin
OBJ=../obj
LIB=../lib

CFLAGS=-O2 -Werror -Wuninitialized

LIBS=algx.o 

.SUFFIXES:

OBJS=$(addprefix $(OBJ)/, $(LIBS))

.SECONDARY: $(OBJS)

PROG=compress

LIST=$(addprefix $(BIN)/, $(PROG))

all: $(LIST)

$(OBJ)/%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(BIN)/%: %.c $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 
