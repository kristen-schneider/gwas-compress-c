#include "unity.h"
#include "read_file.h"

void test_init_file(void)
{
    struct input_file *i = input_file_init("/home/krsc0813/projects/gwas-compress-c/data/ten.tsv");
    TEST_ASSERT_NOT_NULL(i);
    input_file_destroy(&i);
    TEST_ASSERT_NULL(i);

    i = input_file_init("../data/1k.vcf");
    TEST_ASSERT_NULL(i);

    i = input_file_init("../data/bad.bed.gz");
    TEST_ASSERT_NULL(i);
}
