#include "unity.h"
#include "bz2_codec.h"

void test_compress_with_bz2(void)
{
    int r = compress_with_bz2();
    TEST_ASSERT_EQUAL(0, r);
}
