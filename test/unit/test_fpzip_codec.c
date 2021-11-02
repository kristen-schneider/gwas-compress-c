#include "unity.h"
#include "fpzip_codec.h"

void test_compressWithFpzip(void)
{
    int r = compressWithFpzip();
    TEST_ASSERT_EQUAL(0, r);
}
