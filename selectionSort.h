#ifndef PUNTEROS_SELECTIONSORT_H
#define PUNTEROS_SELECTIONSORT_H

#include <vector>

// Function to swap values at two pointers
inline void swap (int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// Function to perform selection sort on arr[]
void selectionSort(std::vector<int>& arr) {
  for (int i = 0; i < static_cast<int>(arr.size()) - 1; ++i) {
    int min_idx = i;
    for (int j = i + 1; j < static_cast<int>(arr.size()); ++j)
      if (arr[j] < arr[min_idx])
        min_idx = j;
    swap(arr[min_idx], arr[i]);
  }
}

#endif // PUNTEROS_SELECTIONSORT_H
