#include "unity.h"
#include "fastpfor_codec.h"

void test_compressWithFastpfor(void)
{
    int r = compressWithFastpfor();
    TEST_ASSERT_EQUAL(0, r);
}
