BIN=bin
OBJ=obj

all:
	cd src; $(MAKE)

clean:
	rm -rf $(BIN)/*
	rm -rf $(OBJ)/*


