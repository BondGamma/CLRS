#include <iostream>

#include "Chapter 1-2/naivePolynomial.hpp"

int main()
{   
    
    std::vector<int> v = {15, -3, 8, 42, 0, 7, 19, -12, 5, 25, 3, 11, -8, 30, 2};

    std::cout << naivePolynomial(v, v.size()-1, 1);

    return 0;
}