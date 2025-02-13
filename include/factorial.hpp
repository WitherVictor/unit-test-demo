#pragma once

#include <cstddef>

template <typename T = std::size_t>
constexpr T factorial(std::size_t number) {
    if (number == 0 || number == 1)
        return 1;

    T result = number;
    while (--number > 1)
        result *= number;

    return result;
}