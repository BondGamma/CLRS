#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

template <typename T>
void bubbleSort(std::vector<T>& arr){
    int n = arr.size()-1;
    for (int i = 0; i < n-1; i++){
        for (int j = n; j >= i+1; j--){
            if (arr[j] < arr[j-1]){
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}

#endif 