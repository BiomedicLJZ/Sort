#ifndef PUNTEROS_BOGOSORT_H
#define PUNTEROS_BOGOSORT_H

#include <vector>
#include <algorithm> //for std::is_sorted and std::shuffle
#include <random> // for std::random_device and std::mt19937

//Función booleana para determinar si el arreglo está ordenado
bool isSorted(const std::vector<int>& arr){
  return std::is_sorted(arr.begin(), arr.end());
}

//función bogosort, recibe el vector a ordenar cómo parametro por referencia
void bogoSort(std::vector<int>& arr){
  // Obtain a time-based seed:
  std::random_device rd;
  std::mt19937 engine(rd());

  //Se comprueba que el arreglo esté ordenado, si no lo está se seguirá ejecutando
  while(!isSorted(arr)){
      //Se realiza un shuffle, se le dice que será de todos los valores desde el primer hasta el último del arreglo
    std::shuffle(arr.begin(), arr.end(), engine);
  }
}

#endif // PUNTEROS_BOGOSORT_H
