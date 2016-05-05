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

/*!
 * Function to print an integer array.
 */
void mergeIntArr(int t[], int first[], int fL, int sec[], int sL) {
	int i = 0;
	int j = 0;
	int k = 0;

	// while both the arrays have the elements left ..
	while (j < fL && k < sL) {
		if (first[j] < sec[k]) {
			t[i++] = first[j++];
		} else {
			t[i++] = sec[k++];
		}
	}

	// while only the first array has the elements left
	while(j < fL) {
		t[i++] = first[j++];
	}

	// while only the second array has the elements left
	while(k < fL) {
		t[i++] = first[k++];
	}
}


/*!
 * Function to print an integer array.
 */
template <typename T, typename Func> void merge(T t[], T first[], int fL, T sec[], int sL, Func compar) {

	int i = 0;
	int j = 0;
	int k = 0;

	// while both the arrays have the elements left ..
	while (j < fL && k < sL) {
		if (compar(first[j], sec[k]) < 0) {
			memcpy(t + i, sec + j, sizeof(T));
			i++; j++;
		} else {
			memcpy(t + i, sec + k, sizeof(T));
			i++; k++;
		}
	}

	// while only the first array has the elements left
	while(j < fL) {
		memcpy(t + i, sec + j, sizeof(T));
		i++; j++;
	}

	// while only the second array has the elements left
	while(k < fL) {
		memcpy(t + i, sec + k, sizeof(T));
		i++; k++;
	}
}