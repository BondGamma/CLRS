#ifndef ADDBITS_HPP
#define ADDBITS_HPP

template <typename T>
int* addBits(const T* A, const T* B, int n){
    int remainder = 0;
    int* C = new int[n+1];
    
    for (int i = 0; i < n; ++i){
        int sum = A[i] + B[i] + remainder;
        C[i] = sum % 2;
        remainder = sum / 2;
    }

    C[n] = remainder;

    return C;
}


std::vector<int> addBits(std::vector<int>& A, std::vector<int>& B){
    int remainder = 0;
    int n = A.size();
    std::vector<int> C(n + 1);

    for (int i = 0; i < n; ++i){
        int sum = A[i] + B[i] + remainder;
        C[i] = sum % 2;
        remainder = sum / 2;
    }
    C[n] = remainder;
}

#endif