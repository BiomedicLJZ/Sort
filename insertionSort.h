#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>
#include <iostream>
#include <cstddef>
// include añadimos nuestras bibliotecas para su uso posterior


template <typename Comparable> //Utilizamos esta plantilla para definir que se utilizaran datos para comparar
void insertionSort(std::vector<Comparable>& a) {
  // Funcion del metodo de ordenamiento (resive un vector)
  for (size_t p = 1; p < a.size(); ++p) {
    // Utilizando un for para iterar el vector desde la posicion 1 en p
    Comparable tmp = std::move(a[p]);
    // tmp guarda la informacion moviendola de variable

    // Se compara la informacion para dejarla en el mismo lugar o moverla de lado derecho en la posicion correcta
    // Si es mayo entonces se movera a la derecha
    size_t j;
    for(j = p; j > 0 && tmp < a[j - 1]; --j) {
      a[j] = std::move(a[j - 1]);

    }

      // Se coloca el elemento en la posicion deseada
    a[j] = std::move(tmp);
  }
}
#endif // INSERTIONSORT_H
