#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

// Function to swap values at two pointers
inline void swap(int* a, int* b) { 
  int t = *a;
  *a = *b;
  *b = t;
}

/* This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right of pivot */
int partition (std::vector<int> &arr, int low, int high) {
  int pivot = arr[high];  // pivot
  int i = (low - 1);  // Index of smaller element

  for (int j = low; j <= high - 1; j++) {
    // If current element is smaller than the pivot
    if (arr[j] < pivot) {
      i++;  // increment index of smaller element
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

/* The main function that implements QuickSort 
 arr --> Array to be sorted, 
 low  --> Starting index, 
 high  --> Ending index */
void quickSort(std::vector<int> &arr, int low, int high) {
  if (low < high) {
    /* pi is partitioning index, arr[pi] is now
    at right place */
    int pi = partition(arr, low, high);

    // Separately sort elements before
    // partition and after partition
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

// Function to call quicksort routine
void quickSort(std::vector<int> &arr){
  quickSort(arr, 0, arr.size()-1);
}

// Complejidad temporal:
// La función partition tiene una complejidad temporal de O(n), donde "n" es el número de elementos en el subarreglo.
// La función quickSort tiene una complejidad temporal promedio de O(n log n).
// En el peor caso, la elección del pivote puede llevar a una complejidad temporal de O(n^2), pero esto es poco probable en situaciones prácticas si se selecciona un pivote de manera adecuada.
// En el mejor caso y en la media, quickSort realiza log(n) particiones, y en cada partición, realiza O(n) comparaciones y swaps.
// Por lo tanto, la complejidad temporal promedio es O(n log n).

// Complejidad espacial:
// La complejidad espacial del algoritmo Quicksort es O(log n) en la pila de llamadas para la versión recursiva.
// Esto se debe a la recursión, ya que cada llamada recursiva agrega un marco de pila.
// En el peor caso, la complejidad espacial puede ser O(n) debido a la recursión en el peor caso, pero en el caso promedio es O(log n).

#endif // QUICKSORT_H
