#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
template<typename T>//Maybe maybe
void bubbleSort(std::vector<T>& arr){
  auto n = arr.size(); //Se iguala una nueva variable llamada n a el tamaño del arreglo
  for (unsigned long i = 0; i < n-1; ++i) {
    for (unsigned long j = 0; j < n-i-1; ++j) {
      if (arr[j] > arr[j + 1]) {
        T temp = arr[j];//Se guarda el elemento en una variable temporal
        arr[j] = arr[j + 1];//Se guarda en el espacio anterior a el elemento siguiente
        arr[j + 1] = temp;
      }
    }
  }
}
#endif //BUBBLESORT_H
