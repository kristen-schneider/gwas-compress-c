#include "unity.h"
#include "fpzip_codec.h"

void test_compress_with_fpzip(void)
{
    int r = compress_with_fpzip();
    TEST_ASSERT_EQUAL(0, r);
}
