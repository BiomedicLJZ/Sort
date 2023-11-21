#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

// Function to merge left and right subsections of an array.
template <typename T>
void merge(std::vector<T>& array, int const left, int const mid, int const right){

    //Store left sub-array
    std::vector<T> leftArray(array.begin() + left, array.begin() + mid + 1);
    //Store right sub-array
    std::vector<T> rightArray(array.begin() + mid + 1, array.begin() + right + 1);

    int leftIndex = 0, rightIndex = 0, mergeIndex = left;

    //Merge left and right sub-array
    while (leftIndex < leftArray.size() && rightIndex < rightArray.size()) {
        if (leftArray[leftIndex] <= rightArray[rightIndex]) {
            array[mergeIndex] = leftArray[leftIndex++];
        }
        else {
            array[mergeIndex] = rightArray[rightIndex++];
        }
        mergeIndex++;
    }

    int arrayIndex = mergeIndex;

    //Add all items, if there is any lef of both sub-arrays
    arrayIndex = std::copy(leftArray.begin() + leftIndex, leftArray.end(), array.begin() + arrayIndex) - array.begin();
    std::copy(rightArray.begin() + rightIndex, rightArray.end(), array.begin() + arrayIndex);
}

// Main MergeSort function: sorts the array using the divide-and-conquer approach
template <typename T>
void mergeSort(std::vector<T>& array, int const begin, int const end){
  if (begin < end) {
    int mid = begin + (end - begin) / 2;
    //Recursively calls sort on left-array
    mergeSort(array, begin, mid);
      //Recursively calls sort on right-array
    mergeSort(array, mid + 1, end);

    //Merge both sub-arrays
    merge(array, begin, mid, end);
  }
}

#endif // MERGESORT_H
