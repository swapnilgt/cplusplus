// myutils.h
// =============================================
// include guard
#ifndef __MYUTILS_H_INCLUDED__ // if this has not been included.
#define __MYUTILS_H_INCLUDED__ // define it.

void swap(int &, int &);
void printIntArr(int *, int);
void mergeIntArr(int[], int[], int, int[], int);
//template <typename T, typename Func> void merge(T[], T[], int, T[], int, Func);

// functor for comparing he integers
/*struct CompareInt {
	int operator() (int a, int b) {
		return a-b;
	}
};*/

/*template void merge<int, CompareInt>(int[], int[], int, int[], int, CompareInt);
*/
#endif