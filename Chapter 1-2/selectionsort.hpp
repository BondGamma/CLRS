#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP


template <typename T>
void selectionSort(T* arr, int n){
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