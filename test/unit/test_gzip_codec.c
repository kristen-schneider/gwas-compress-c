#include "unity.h"
#include "gzip_codec.h"

void test_compressWithGzip(void)
{
    int r = compressWithGzip();
    TEST_ASSERT_EQUAL(0, r);
}
