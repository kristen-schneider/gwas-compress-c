#include "unity.h"
#include "bz2_codec.h"

void test_compressWithBz2(void)
{
    int r = compressWithBz2();
    TEST_ASSERT_EQUAL(0, r);
}
