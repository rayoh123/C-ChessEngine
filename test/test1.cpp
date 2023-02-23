#include <gtest/gtest.h>
#include "../src/Board.hpp"

// Demonstrate some basic assertions.
TEST(SimpleTests, BasicAssertions) 
{
	// Expect two strings not to be equal.
	EXPECT_STRNE("hello", "world");
	// Expect equality.
	EXPECT_EQ(7 * 6, 42);
}

TEST(SimpleTests, TestFactorial)
{
	EXPECT_EQ(120, 120);
}

TEST(SimpleTests, TestSquare)
{
	EXPECT_EQ(25, 25);
}