#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
template<typename T>//Declaracion de template para uso libre de tipos de dato
void bubbleSort(std::vector<T>& arr){//Se toma un arreglo como dato par usarse en la funcion
  auto n = arr.size(); //Se iguala una nueva variable llamada [n] al tamaño del arreglo
  //Primer [for] se repetira mientras que [i] sea menor al tamaño del arreglo menos 1
  for (unsigned long i = 0; i < n-1; ++i) {
  //Segundo [for] se repetira mientras que [j] sea menor al tamaño del arreglo menos [i] menos 1
    for (unsigned long j = 0; j < n-i-1; ++j) {
    //Si el espacio del arreglo igual al valor de [j] es mayor a el siguiente espacio
      if (arr[j] > arr[j + 1]) {

        T temp = arr[j];//Se guarda el elemento en espacio [j] en una variable temporal
        arr[j] = arr[j + 1];//Se sustituye el valor del espacio siguiente en el espacio [j]

        arr[j + 1] = temp;//El elemento siguiente se sustituye con el valor guardado en la variable temporal
        //El cual era el valor guardado en el espacio numero [j]
      }
    }
  }
}
#endif //BUBBLESORT_H
