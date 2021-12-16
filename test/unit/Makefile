UNITY_ROOT=./unity
ZLIB_ROOT=../../lib/zlib/
FPZIP_ROOT=../../lib/fpzip/
HTSLIB_ROOT=../../lib/htslib/
CC=gcc
SRC=../../src/
TEST_SRC=$(wildcard *.c)
TEST_NAMES=$(TEST_SRC:.c=)
PREFIX=Runner_
RUNNERS=$(addprefix $(PREFIX),$(TESTS))

NO_PRE_SRC_FILES= bz2_codec.c \
		  fastpfor_codec.c \
		  fpzip_codec.c \
		  gzip_codec.c \
		  zfp_codec.c \
		  zlib_codec.c \
		  read_file.c 

SRC_FILES=$(addprefix $(SRC),$(NO_PRE_SRC_FILES))

all: clean $(TEST_NAMES) test


%: %.c
	ruby $(UNITY_ROOT)/generate_test_runner.rb $@.c
	$(CC) -Werror -g -o $@ \
	    -I$(UNITY_ROOT) \
	    -I$(SRC) \
	    -I$(HTSLIB_ROOT)/include/ \
	    -L$(ZLIB_ROOT) \
	    -L$(FPZIP_ROOT) \
	    -L$(HTSLIB_ROOT)/lib/ \
	    -DTEST $(UNITY_ROOT)/unity.c \
	    $(SRC_FILES) \
	    $@.c $@_Runner.c \
	    -lz \
	    -lhts

test:
	$(foreach var,$(TEST_NAMES),./$(var);)

clean:
	rm -f $(TEST_NAMES)
	rm -f *_Runner.c
	rm -rf *dSYM/
