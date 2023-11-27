#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

// Function to merge left and right subsections of an array.
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

// Complejidad temporal:
// La función mergeSort tiene una complejidad temporal de O(n log n), donde "n" es el número de elementos en el arreglo.
// La función merge también tiene una complejidad temporal de O(n), ya que combina dos subarreglos ordenados.
// La recursión en mergeSort realiza divisiones del arreglo hasta que cada subarreglo tenga un solo elemento, lo que lleva a log(n) divisiones.
// En cada nivel de la recursión, hay O(n) operaciones debido a la combinación de subarreglos en la función merge.
// Por lo tanto, el tiempo total es O(n log n).

// Complejidad espacial:
// La complejidad espacial del algoritmo Merge Sort es O(n), donde "n" es el número de elementos en el arreglo.
// Esto se debe al uso de arreglos temporales L[] y R[] para almacenar los subarreglos durante el proceso de combinación en la función merge.
// Además, la recursión en mergeSort utiliza la pila de llamadas, ocupando espacio proporcional al log(n) en el peor caso.
// En resumen, la complejidad espacial es O(n) + O(log n), que se simplifica a O(n).

#endif // MERGESORT_H
