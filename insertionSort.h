#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>
#include <iostream>
#include <cstddef>

// This function implements the insertion sort algorithm to sort a vector of elements in ascending order.
// It iterates over each element, finds the correct position for it in the sorted part of the vector, and places it there.
template <typename Comparable>
void insertionSort(std::vector<Comparable>& a) {
  // Iterate over each element in the vector
  for (size_t p = 1; p < a.size(); ++p) {
    // Use std::move for efficiency when dealing with large objects
    Comparable tmp = std::move(a[p]);
    size_t j = p;

    // Find the correct position for the current element in the sorted part of the array
    while(j > 0 && tmp <a[j - 1]) {
        a[j] = std::move(a[j - 1]);
        j--;
    }

    // Place the current element in the correct position
    a[j] = std::move(tmp);
  }
}
#endif // INSERTIONSORT_H

//Los cambios que hice fue nomas cambiar los for a while, ya que los for son muy pesados
//La razon por la que deje el primer for es que por alguna razon, al convertirlo a while tardaba mas que dejandolo como for