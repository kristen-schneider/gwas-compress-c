#include "unity.h"
#include "algx.h"

void test_alg_add(void)
{
    int r = alg_add(1, 2);
    TEST_ASSERT_EQUAL(3, r);

    r = alg_add(-1, 2);
    TEST_ASSERT_EQUAL(5, r);
}
