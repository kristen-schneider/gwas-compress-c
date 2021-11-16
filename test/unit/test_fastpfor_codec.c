#include "unity.h"
#include "fastpfor_codec.h"

void test_compress_with_fastpfor(void)
{
    int r = compress_with_fastpfor();
    TEST_ASSERT_EQUAL(0, r);
}
