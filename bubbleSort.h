#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
template<typename T>
void bubbleSort(std::vector<T>& arr){
  auto n = arr.size();
  for (unsigned long i = 0; i < n-1; ++i) {
    for (unsigned long j = 0; j < n-i-1; ++j) {
      if (arr[j] > arr[j + 1]) {
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void improvedBubbleSort(std::vector<int>& arr){
  auto n = arr.size();
  bool swapped;
  for (unsigned long i = 0; i < n-1; ++i) {
    swapped = false;
    for (unsigned long j = 0; j < n-i-1; ++j) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if(!swapped){
      break;
    }
  }
}
#endif //BUBBLESORT_H
