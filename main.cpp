#include<iostream>
#include <mysorting.h>
#include<myutils.h>

using namespace std;

int main() {
	int arr[5] = {5,4,3,2,1};
	//Sorting::insertionSort(arr, 5);
	//Sorting::bubbleSort(arr, 5);
	//Sorting::selectionSort(arr, 5);
	Sorting::mergeSort(arr, 5);
	printIntArr(arr, 5);
}
