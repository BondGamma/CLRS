#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include <vector>

template <typename T>
void selectionSort(std::vector<T>& arr){
    int n = arr.size();
    for (int i = 0; i < n-1; ++i){
        int smallest = i;
        for (int j = i+1; j < n; ++j){
            if (arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

#endif