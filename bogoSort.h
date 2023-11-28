#ifndef PUNTEROS_BOGOSORT_H
#define PUNTEROS_BOGOSORT_H

#include <vector>
#include <algorithm> //for std::is_sorted and std::shuffle
#include <random> // for std::random_device and std::mt19937

bool isSorted(const std::vector<int>& arr){
  return std::is_sorted(arr.begin(), arr.end());
}

void bogoSort(std::vector<int>& arr){
  // Obtain a time-based seed:
  std::random_device rd;
  std::mt19937 engine(rd());

  while(!isSorted(arr)){
    std::shuffle(arr.begin(), arr.end(), engine);
  }
}

#endif // PUNTEROS_BOGOSORT_H
