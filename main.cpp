#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include"insertionSort.h"
#include"bubbleSort.h"
#include"shellSort.h"
#include"mergeSort.h"
#include "quickSort.h"

template <typename Object>
std::vector<Object> generateData(unsigned int size) {
  std::vector<Object> v;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 1000);

  for (unsigned int i = 0; i < size; ++i) {
    v.push_back(dis(gen));
  }
  return v;
}


int main() {
  std::vector<int> v = generateData<int>(10000);

  if(v.empty()){
    std::cout << "Vector is empty. Exiting.";
    return 0;
  }

  std::cout << "Sorting vector using bubble sort: " << std::endl;
  auto start = std::chrono::high_resolution_clock::now();
  bubbleSort(v);
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> diff = end - start;
  std::cout << "Execution Time: " << diff.count() << " s" << std::endl;


  std::cout << "Sorting vector using insertion sort: " << std::endl;
  std::vector<int> v2 = generateData<int>(10000);
   start = std::chrono::high_resolution_clock::now();
  insertionSort(v2);
   end = std::chrono::high_resolution_clock::now();
        diff = end - start;
  std::cout << "Execution Time: " << diff.count() << " s" << std::endl;

  std::cout << "Sorting vector using shell sort: " << std::endl;
  std::vector<int> v3 = generateData<int>(10000);
        start = std::chrono::high_resolution_clock::now();
        shellSort(v3);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "Execution Time: " << diff.count() << " s" << std::endl;


        std::cout << "Sorting vector using Merge Sort" << std::endl;
        std::vector<int> v4 = generateData<int>(1000000);
        start = std::chrono::high_resolution_clock::now();
        mergeSort(v4,0,v4.size()-1);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "Execution Time: " << diff.count() << " s" << std::endl;

        std::cout << "Sorting vector using Quick sort: " << std::endl;
        std::vector<int> v5 = generateData<int>(1000000);
        start = std::chrono::high_resolution_clock::now();
        quickSort(v5);
        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "Execution Time: " << diff.count() << " s" << std::endl;
  return 0;
}
