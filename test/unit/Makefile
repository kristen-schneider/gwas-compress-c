UNITY_ROOT=./unity
ZLIB_ROOT=../../lib/zlib/
CC=gcc
SRC=../../src/
TEST_SRC=$(wildcard *.c)
TEST_NAMES=$(TEST_SRC:.c=)
PREFIX=Runner_
RUNNERS=$(addprefix $(PREFIX),$(TESTS))

NO_PRE_SRC_FILES= algx.c \
		  bz2_codec.c \
		  fastpfor_codec.c \
		  fpzip_codec.c \
		  gzip_codec.c \
		  zfp_codec.c \
		  zlib_codec.c 

SRC_FILES=$(addprefix $(SRC),$(NO_PRE_SRC_FILES))

all: clean $(TEST_NAMES) test


%: %.c
	ruby $(UNITY_ROOT)/generate_test_runner.rb $@.c
	$(CC) -Werror -g -o $@ \
	    -I$(UNITY_ROOT) \
	    -I$(SRC) \
	    -L$(ZLIB_ROOT) \
	    -DTEST $(UNITY_ROOT)/unity.c \
	    $(SRC_FILES) \
	    $@.c $@_Runner.c 

test:
	$(foreach var,$(TEST_NAMES),./$(var);)

clean:
	rm -f $(TEST_NAMES)
	rm -f *_Runner.c
	rm -rf *dSYM/
