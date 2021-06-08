#include "gtest/gtest.h"

#include "hello.h"

TEST(hello_test, CHK_MSG)
{
    EXPECT_EQ(get_message(), "hello there!");
}