#include<iostream>
#include<myutils.h>
using namespace std;
/*!
This class has the functions for all the sorting methods.
*/
class Sorting {
	public:
		static void bubbleSort(int *, int);
		static void selectionSort(int *, int);
		static void insertionSort(int *, int);
		template <typename T, typename Func> static void mergeSort(T *,int, Func);
};


/*!
The bubble sort for integers.
Check the consecutive positions incrementally and if they are not in corect order,
then swap them
https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif
*/
void Sorting::bubbleSort(int *arr, int l) {
	bool found = true;
	for (int i = 0; i < l - 1 && found; i++) {
		found = false;	
		for (int j = 0; j < l - 1 - i; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				found = true;
			}
		}
	}
}

/*!
Function for selection sort.
Select the minimum integer in each iteration and put it at the correct position
https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif
*/
void Sorting::selectionSort(int *arr, int l) {
	for (int i = 0; i < l - 1; i++) {
		int minPos = i;
		for (int j = i+1 ; j < l; j++) {
			if (arr[j] < arr[minPos]) {
				minPos = j;
			}
		}
		if (minPos != i) {
			swap(arr[i], arr[minPos]);
		}
	}
}

/*!
Function for insertion sort.
We select positions in an array in incremental positions and pick integer at that
position and place them to the right position
https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif
*/
void Sorting::insertionSort(int *arr, int l) {
	for (int i = 1; i < l; i++) {
		int j = i - 1;
		int val = arr[i];
		cout << "j = " << j << endl;
		while(j >= 0 && val < arr[j]) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = val;
	}
}

template <typename T, typename Func> void Sorting::mergeSort(T *arr, int l, Func compar) {
	// if the lengh of the array is 1, it is already sorted. Case, when the array is
	// empty
	if (l <= 1) {
		return;
	}

	// else, we divide the arrays and recurse..
	T *left = new T[l/2];
	T *right = new T[l - l/2];

	// copying the values into the left and the right arrays..
	memcpy(left, arr, l/2 * sizeof(T));
	memcpy(right, arr + l/2, (l - l/2) * sizeof(T));

	// running merge sort on the lef tand the right arrays separately ..
	mergeSort(left, l/2, compar);
	mergeSort(right, l - l/2, compar);

	merge(arr, left, l/2, right, l - l/2, compar);
}


