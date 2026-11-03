#ifndef NAIVEPOLYNOMIAL_HPP
#define NAIVEPOLYNOMIAL_HPP

template <typename T>
T naivePolynomial(std::vector<T> arr, int n, int x){
    T p = 0;
    for (int i = n; i >= 0; i--){
        T xs = 1;
        for (int j = i; j > 0; j--){
            xs *= x;
        }
        p += xs * arr[i];
    }
    return p;
}

#endif