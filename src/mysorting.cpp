#include<iostream>
#include<myutils.h>
using namespace std;
/*!
This class has the functions for all the sorting methods.
*/
class Sorting {
	public:
		static void bubbleSort(int *arr, int l);
		static void selectionSort(int *arr, int l);
		static void insertionSort(int *arr, int l);
};


/*!
The bubble sort for integers.
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
