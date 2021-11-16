#include "unity.h"
#include "zlib_codec.h"

void test_compress_with_zlib(void)
{
    int r = compress_with_zlib();
    TEST_ASSERT_EQUAL(0, r);
}
