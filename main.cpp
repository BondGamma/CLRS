#include <iostream>
#include <vector>
#include "insertion.hpp"

int main()
{
    std::vector<int> x = {4,5,1,2,3,5,6,19,83,92};
    insertion_sort(x);

    for (auto& i : x){
        std::cout << i << " ";
    }
    std::cout << '\n';

    return 0;
}
