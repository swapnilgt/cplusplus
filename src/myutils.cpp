#include<iostream>

using namespace std;
/*!
 * Function taking the references of two integers and swapping them ...
 */
void swap(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b; 
}


/*!
 * Function to print an integer array.
 */
void printIntArr(int *arr, int l) {
	for (int i = 0; i < l; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}