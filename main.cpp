#include <iostream>

#include "Chapter 1-2/horner.hpp"

int main()
{   
    
    std::vector<int> v = {15, -3, 8, 42, 0, 7, 19, -12, 5, 25, 3, 11, -8, 30, 2};

    std::cout << horner(v, 1);

    return 0;
}