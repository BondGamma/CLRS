#ifndef HASTWOSUM_HPP
#define HASTWOSUM_HPP

#include "mergesort.hpp"
#include "binarysearch.hpp"

template <typename T>
void hasTwoSums(std::vector<T> s, int x){
    std::sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++){
        int target = x - s[i];
        int result = binary_search(s, target);
        if (result != -1){
            std::cout << s[result] << " ";
        }
    }
}

#endif