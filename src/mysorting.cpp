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
		printIntArr(arr, l);
	}
}


