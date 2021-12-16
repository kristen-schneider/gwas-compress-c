#include "unity.h"
#include "read_file.h"

void test_set_good_file_name(void)
{
    struct input_file *i = input_file_init("../data/ten.tsv.gz");
    TEST_ASSERT_EQUAL_STRING(i->file_name, "../data/ten.tsv.gz");
}

void test_set_bad_file_name(void)
{
    struct input_file *i = input_file_init("../data/ten.tsv");
    TEST_ASSERT_NULL(i);
}

void test_set_type(void)
{
    struct input_file *i = input_file_init("../data/ten.tsv.gz");
    TEST_ASSERT_EQUAL(i->type, TSV);

}

void test_fail(void)
{
    struct input_file *i = input_file_init("../data/ten.tsv");
    TEST_ASSERT_EQUAL_STRING(i->file_name, "../data/ten.tsv");
}
