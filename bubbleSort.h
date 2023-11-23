#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
template<typename T>
void bubbleSort(std::vector<T>& arr){ // La función bubblesort toma un vector T por referencia
  auto n = arr.size(); // Esto es para saber cuál es el tamaño del vector que se va a ordenar
  for (unsigned long i = 0; i < n-1; ++i) { // Es un ciclo para recorrer todos los elementos del vector
    for (unsigned long j = 0; j < n-i-1; ++j) { // Este es otro ciclo que va a comparar y ordenar los elementos del vector
      if (arr[j] > arr[j + 1]) { // Esta parte compara los elementos que son adyacentes
        T temp = arr[j]; // Esta parte es el intercambio de elementos utilizando una variable temporal
        arr[j] = arr[j + 1]; // Esta parte es el intercambio de elementos utilizando una variable temporal
        arr[j + 1] = temp; // Esta parte es el intercambio de elementos utilizando una variable temporal
      }
    }
  }
}
#endif //BUBBLESORT_H
