#ifndef INSERTION_HPP
#define INSERTION_HPP

template <typename T>
void insertion_sort(std::vector<T>& container){
    for (size_t i = 1; i <= static_cast<size_t>(container.size()); ++i){
        T key = container[i];
        size_t j = i - 1;
        while (j >= 0 && container[j] >= key){
            container[j+1] = container[j];
            j = j - 1;
        }
        container[j+1] = key;
    }
}

#endif