#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
template<typename T>
void bubbleSort(std::vector<T>& arr){
  auto n = arr.size();
  bool switched = false;
  for (unsigned long i = 0; i < n-1; ++i) {
      switched = false;
    for (unsigned long j = 0; j < n-i-1; ++j)
    {
      if (arr[j] > arr[j + 1]) {
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        switched = true;
      }
    }
    if (!switched)
    {
        break;
    }
  }
}
#endif //BUBBLESORT_H
