#ifndef COMBINATIONS_HPP
#define COMBINATIONS_HPP
#include "1.hpp"

int64_t combinations(int64_t k, int64_t n) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
#endif