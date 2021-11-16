#include "unity.h"
#include "zfp_codec.h"

void test_compress_with_zfp(void)
{
    int r = compress_with_zfp();
    TEST_ASSERT_EQUAL(0, r);
}
