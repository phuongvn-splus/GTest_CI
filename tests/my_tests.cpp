#include <gtest/gtest.h>
#include "../src/Math.h"

TEST(AbsFunctionTest, BasicCases)
{
	EXPECT_EQ(Abs(5), 5);
	EXPECT_EQ(Abs(-5), 5);
	EXPECT_EQ(Abs(0), 0);
}

TEST(AbsFunctionTest, EdgeCases)
{
	EXPECT_EQ(Abs(::std::numeric_limits<int>::max()), ::std::numeric_limits<int>::max());
	EXPECT_THROW(Abs(::std::numeric_limits<int>::min()), ::std::overflow_error);
}