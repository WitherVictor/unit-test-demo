#include <print>

#include "factorial.hpp"

int main() {
    constexpr auto input = 5ull;
    std::println("The factorial of {} is {}",input, factorial(input));
}