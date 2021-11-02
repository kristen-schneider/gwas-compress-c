#include "unity.h"
#include "zlib_codec.h"

void test_compressWithZlib(void)
{
    int r = compressWithZlib();
    TEST_ASSERT_EQUAL(0, r);
}
