// shellsort.h

#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <vector>

// Function to implement Shell Sort

// TIME COMPLEXITY                  SPATIAL COMPLEXITY
/*
Worst Case = O(N(log(N))^2)         = O(1)
Average Case = O(N(log(N))^2)
Best Case = O(N log N)
 */
void shellSort(std::vector<int>& arr){
  int n = arr.size();

  // Start with a big gap, then reduce the gap
  for (int gap = n/2; gap > 0; gap /= 2){
    // Do a gapped insertion sort for this gap size.
    // The first gap elements arr[0..gap-1] are already in gapped order
    // keep adding one more element until the entire array is gap sorted
    for (int i = gap; i < n; i += 1){
      // add arr[i] to the elements that have been gap sorted
      // save arr[i] in temp and make a hole at position i
      int temp = arr[i];

      // shift earlier gap-sorted elements up until the correct location for arr[i] is found
      int j;
      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
        arr[j] = arr[j - gap];

      // put temp (the original arr[i]) in its correct location
      arr[j] = temp;
    }
  }
}

#endif // SHELLSORT_H
