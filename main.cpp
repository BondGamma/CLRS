#include <iostream>
#include <vector>
#include "addbits.hpp"

int main()
{   
    int A[] = {1, 1, 1, 0, 1, 1, 0, 1, 1, 1}; // 887
    int B[] = {0, 0, 1, 0, 0, 1, 0, 0, 0, 0}; // 292
    int n = 10;
    int* myArr = addBits(A,B,n);

    for (int i = n; i >= 0; i--){
        std::cout << myArr[i];
    }
    std::cout << '\n';

    delete[] myArr;

    
    return 0;
}
