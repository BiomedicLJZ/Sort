cmake_minimum_required(VERSION 3.26)
project(sorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(sorting main.cpp insertionSort.h
        bubbleSort.h
        shellSort.h
        test2.h
        mergeSort.h
        quicksort.h)
