#ifndef INSERTION_HPP
#define INSERTION_HPP

template <typename T>
void insertionSort(std::vector<T>& container){
    for (std::size_t i = 1; i < static_cast<std::size_t>(container.size()); ++i){
        T key = container[i];
        std::size_t j = i - 1;
        while (j >= 0 && container[j] >= key){
            container[j+1] = container[j];
            j = j - 1;
        }
        container[j+1] = key;
    }
}

template <typename T>
void insertionSortDecreasing(std::vector<T>& container){
    for (int i = 1; i < container.size(); ++i){
        T key = container[i];
        int j = i - 1;
        while (j>=0 && container[j] <= key){
            container[j+1] = container[j];
            j= j - 1;
        }
        container[j+1] = key;
    }
}

template <typename T>
int linearSearch(std::vector<T>& container, T searchValue){
    for (int i = 0; i < container.size(); i++){
        if (container[i] == searchValue){
            return i;
        }
    }
    return -1;
}

#endif