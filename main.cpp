#include<iostream>
#include <mysorting.h>
#include<myutils.h>

using namespace std;

// functor for comparing he integers
struct CompareInt {
	int operator() (int a, int b) {
		return a-b;
	}
};

int main() {
	int arr[5] = {5,4,3,2,1};
	//Sorting::insertionSort(arr, 5);
	//Sorting::bubbleSort(arr, 5);
	//Sorting::selectionSort(arr, 5);
	CompareInt c;
	Sorting::mergeSort(arr, 5, c);
	printIntArr(arr, 5);
}
