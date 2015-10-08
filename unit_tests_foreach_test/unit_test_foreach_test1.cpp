// unit_test_foreach_test1.cpp : Defines the entry point for the console application.

#include "gtest/gtest.h"
#include "foreach_test1.h"

TEST(test_foreach, dummy_test1)
{
	EXPECT_EQ(42, dummy_test(21));
}

TEST(std_vector_tests, starts_empty)
{
	std::vector<int> v;
	EXPECT_EQ(0, v.size());
}

TEST(std_vector_tests, can_add_element)
{
	std::vector<int> v;
	auto e = 1;
	v.push_back(e);
	EXPECT_EQ(1, v.size());
	EXPECT_EQ(e, v.back());
}
