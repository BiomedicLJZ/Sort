#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>
#include <iostream>
#include <cstddef>

// This function implements the insertion sort algorithm to sort a vector of elements in ascending order.
// It iterates over each element, finds the correct position for it in the sorted part of the vector, and places it there.

// TIME COMPLEXITY                  SPATIAL COMPLEXITY
/*
Worst Case = O(N^2)                  = O(1)
Average Case = O(N^2)
Best Case = O(N)
 */
template <typename Comparable>
void insertionSort(std::vector<Comparable>& a) {
  // Iterate over each element in the vector
  for (size_t p = 1; p < a.size(); ++p) {
    // Use std::move for efficiency when dealing with large objects
    Comparable tmp = std::move(a[p]);
    size_t j;

    // Find the correct position for the current element in the sorted part of the array
    for(j = p; j > 0 && tmp < a[j - 1]; --j) {
      a[j] = std::move(a[j - 1]);
    }

    // Place the current element in the correct position
    a[j] = std::move(tmp);
  }
}
#endif // INSERTIONSORT_H
