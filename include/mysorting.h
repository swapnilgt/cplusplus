//sorting.h
//==================================
// include guard
#ifndef __MYSORTING_H_INCLUDED__ // if this header has not been included
#define __MYSORTING_H_INCLUDED__ // define it

//==================================
// forward declared dependencies

// =================================
// include dependencies

// =================================
// the actual class

class Sorting {
	public:
		static void bubbleSort(int *, int);
		static void selectionSort(int *, int);
		static void insertionSort(int *, int);
};

#endif