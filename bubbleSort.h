#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
template<typename T>
void bubbleSort(std::vector<T>& arr){//funcion de bubble sort que aprovecha el template para funcionar con cualquier tipo de dato
  auto n = arr.size();//toma el tamano del vector,
  for (unsigned long i = 0; i < n-1; ++i) {//for para el tamano de el arreglo tomando en cuenta que comienza en 0
    for (unsigned long j = 0; j < n-i-1; ++j) {//for que va haciendose mas pequeno dependiendo de la cantidad
      if (arr[j] > arr[j + 1]) {//compara los datos usando j y los cambia con la variable de paso temp si el primer termino es mayor al segundo
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }//bubble sort has an average of n^2 in time complexity and a 1 space complexity
}
#endif //BUBBLESORT_H
