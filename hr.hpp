#pragma once

#include <vector>
#include <cstring>
#include <fstream>
#include <iostream>
#include <algorithm>

template <typename T> T factorial(T n) {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    T result = 1;
    while(n > 1) result *= n--;
    return result;
}

template <typename T> T seq_sum(T n) {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    T result = 0;
    while(n > 0) result += n--;
    return result;
}
