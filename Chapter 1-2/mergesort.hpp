#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include <vector>

template <typename T>
void merge(std::vector<T>& arr, int left, int mid, int right){
    int i = 0;
    int j = 0; 
    int k = left;
    
    const int lenLeft = mid - left + 1;
    const int lenRight = right - mid;

    std::vector<T> L(lenLeft);
    std::vector<T> R(lenRight);
    for (int i = 0; i < lenLeft; i++) L[i] = arr[left+i];
    for (int j = 0; j < lenRight; j++) R[j] = arr[mid+j+1];
    
    i = 0,
    j=0,
    k=left;
    
    while (i < lenLeft && j < lenRight){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < lenLeft){
        arr[k++] = L[i++];
    }
    while (j < lenRight){
        arr[k++] = R[j++];
    }
}

template <typename T>
void merge_sort(std::vector<T>& arr, int left, int right){
    if (left >= right){
        return;
    } 
    int q = left + (right - left) / 2;
    merge_sort(arr,left,q);
    merge_sort(arr,q+1,right);
    merge(arr,left,q,right);
}

#endif