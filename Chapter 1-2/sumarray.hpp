#ifndef SUMARRAY_HPP
#define SUMARRAY_HPP

#include <vector>

template <typename T>
int sumArray(std::vector<T>& container){
    int sum = 0;
    for (size_t i = 0; i < static_cast<size_t>(container.size()); ++i){
        sum += container[i];
    }
    return sum;
}

#endif