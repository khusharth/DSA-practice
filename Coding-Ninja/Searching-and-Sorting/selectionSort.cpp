/*
Selection Sort

// Time Complexity: O(n^2)
// Space Complexity: O(1)

*/

#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int *arr, int n) {

	// Repeat for n-1 rounds / pass (as last el will be automatically sorted)
	for (int i = 0; i < n - 1; i++) {
		int minElement = arr[i], minElIndex = i;

		// Traverse the arr and find min element
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < minElement) {
				minElement = arr[j];
				minElIndex = j;
			}
		}
		
		// Swap first position with min El found
		swap(arr[i], arr[minElIndex]);
	}
	
}

int main() {
	int size;
	cin >> size;
	
	int *arr = new int[size];
	
	for(int i = 0; i < size; ++i) {
		cin >> arr[i];
	}
	
	selectionSort(arr, size);
	
	for(int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	
	delete [] arr;

}
