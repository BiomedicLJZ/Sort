#ifndef PUNTEROS_SELECTIONSORT_H
#define PUNTEROS_SELECTIONSORT_H

#include <vector>

// Function to swap values at two pointers
inline void swap (int &a, int &b) {
  //Variable temporal para guardar un valor
  int temp = a;
  a = b;
  b = temp;
}

// Function to perform selection sort on arr[]
void selectionSort(std::vector<int>& arr) {
  for (int i = 0; i < static_cast<int>(arr.size()) - 1; ++i) {
      //Se toma un numero (i) para comparar con los demás y encontrar el más pequeño
    int min_idx = i;
    for (int j = i + 1; j < static_cast<int>(arr.size()); ++j)
        //en este punto el valor mínimo se encuentra en el indice i
        //j recorre el arreglo y compara si el numero en posición j es más pequeño que el actual mínimo
      if (arr[j] < arr[min_idx])
          //Si j es más pequeño, ese valor es el mínimo de la parte no ordenada del arreglo
        min_idx = j;
    //Se cambia el valor mínimo que se haya encontrado por la posición actual de i
    //Dándole así su lugar correspondiente al actual número más pequeño no ordenado
    swap(arr[min_idx], arr[i]);
  }
}

#endif // PUNTEROS_SELECTIONSORT_H
