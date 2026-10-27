#ifndef BINARYSEARCH_HPP
#define BINARYSEARCH_HPP

template <typename T>
int binary_search(std::vector<T>& A, int num){
    int left = 0, right = A.size()-1;
    while (left < right){
        int mid = left + (right - left) / 2;
    
        if (A[mid] < num){
            left = mid + 1; 
        } else {
             right = mid;
        }
    }
    if (num == A[right]){
        return right;
    } else {
        return -1;
    }
}

#endif