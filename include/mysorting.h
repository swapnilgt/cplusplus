//sorting.h
//==================================
// include guard
#ifndef __MYSORTING_H_INCLUDED__ // if this header has not been included
#define __MYSORTING_H_INCLUDED__ // define it

//==================================
// forward declared dependencies

// =================================
// include dependencies
#include<myutils.h>
// =================================
// the actual class

class Sorting {
	public:
		static void bubbleSort(int *, int);
		static void selectionSort(int *, int);
		static void insertionSort(int *, int);
		//template <typename T, typename Func> static void mergeSort(T *, int, Func);
		static void mergeSort(int *, int);
};

//Sorting::mergeSort(T *, int, );

//template static void Sorting::mergeSort<int, CompareInt>(int *, int, CompareInt);

#endif