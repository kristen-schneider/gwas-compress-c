#include "unity.h"
#include "gzip_codec.h"

void test_compress_with_gzip(void)
{
    int r = compress_with_gzip();
    TEST_ASSERT_EQUAL(0, r);
}
