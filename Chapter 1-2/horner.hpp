#ifndef HORNER_HPP
#define HORNER_HPP

template <typename T>
T horner(std::vector<T>& arr, int x){
    int n = arr.size() - 1;
    T p = 0;
    for (int i = n; i >= 0; i--){
        p = arr[i] + x * p;
    }
    return p;
}

#endif