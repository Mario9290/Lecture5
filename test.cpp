#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"  // Include the functions to test

// Test the Sum function for integers
TEST_CASE("Sum of integers", "[Sum]") 
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    REQUIRE(Sum(nums) == 15);  // Check if sum equals 15
}

// Test the Sign function
TEST_CASE("Sign of integers", "[Sign]")
 {
    REQUIRE(Sign(-5) == -1);   // Negative number
    REQUIRE(Sign(3) == 1);     // Positive number
    REQUIRE(Sign(0) == 1);     // Zero case
}

// Test the Sum function for doubles
TEST_CASE("Sum of doubles", "[Sum]") 
{
    std::vector<double> nums = {1.1, 2.2, 3.3, 4.4, 5.5};
    REQUIRE(Sum(nums) == Approx(16.5).epsilon(0.001));  // Allow a small margin for floating point comparisons
}

