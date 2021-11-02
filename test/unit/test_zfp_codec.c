#include "unity.h"
#include "zfp_codec.h"

void test_compressWithZfp(void)
{
    int r = compressWithZfp();
    TEST_ASSERT_EQUAL(0, r);
}
