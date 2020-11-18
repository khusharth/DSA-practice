/*
* Check if array is sorted or not
*/

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) { 
	// Base case 
	if (size == 0 || size == 1) {
		return true;
	}
	
	bool smallOutput = isSorted(arr + 1, size - 1);
	
	return (arr[0] < arr[1]) && smallOutput;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	
	cout << isSorted(arr, 5) <<endl;
	return 0;
} 
