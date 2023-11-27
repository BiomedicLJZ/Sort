#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

// Function to merge left and right subsections of an array.

// TIME COMPLEXITY                  SPATIAL COMPLEXITY
/*
Worst Case = O(N log N)                  = O(N)
Average Case = O(N log N)
Best Case = O(N log N)
 */
template <typename T>
void merge(std::vector<T>& array, int const left, int const mid, int const right){
    std::vector<T> leftArray(array.begin() + left, array.begin() + mid + 1);
    std::vector<T> rightArray(array.begin() + mid + 1, array.begin() + right + 1);

    auto leftIndex = 0, rightIndex = 0, mergeIndex = left;
    while (leftIndex < leftArray.size() && rightIndex < rightArray.size()) {
        if (leftArray[leftIndex] <= rightArray[rightIndex]) {
            array[mergeIndex] = leftArray[leftIndex++];
        }
        else {
            array[mergeIndex] = rightArray[rightIndex++];
        }
        mergeIndex++;
    }
    auto arrayIndex = mergeIndex;
    arrayIndex = std::copy(leftArray.begin() + leftIndex, leftArray.end(), array.begin() + arrayIndex) - array.begin();
    std::copy(rightArray.begin() + rightIndex, rightArray.end(), array.begin() + arrayIndex);
}

// Main MergeSort function: sorts the array using the divide-and-conquer approach
template <typename T>
void mergeSort(std::vector<T>& array, int const begin, int const end){
  if (begin < end) {
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
  }
}

#endif // MERGESORT_H
