#include <gtest/gtest.h>

#include "factorial.hpp"

TEST(factorial, positive_inputs) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 24);
    EXPECT_EQ(factorial(5), 120);
}

TEST(factorial, zero) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(factorial, large_inputs) {
    EXPECT_EQ(factorial(10), 3'628'800);
    EXPECT_EQ(factorial(15), 1'307'674'368'000);
    EXPECT_EQ(factorial(20), 2'432'902'008'176'640'000);
}