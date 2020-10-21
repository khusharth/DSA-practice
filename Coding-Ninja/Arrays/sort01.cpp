/*
Sort 0 1

You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
Note:

You need to change in the given array/list itself. Hence, no need to return or print anything. 

Input format :

The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers(all 0s and 1s) representing the elements in the array/list.

Output format :

For each test case, print the sorted array/list elements in a row separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :

1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

Sample Input 1:

1
7
0 1 1 0 1 0 1

Sample Output 1:

0 0 0 1 1 1 1

Sample Input 2:

2
8
1 0 1 1 0 1 0 1
5
0 1 0 1 0

Sample Output 2:

0 0 0 1 1 1 1 1
0 0 0 1 1 

*/


#include<iostream>
using namespace std;

void sortZeroesAndOne(int arr[], int size) {
	int lastIndex = size - 1; // Pointer to fill 1's from the end of array
	int i = 0;
	
	while (i <= lastIndex) {		
		if (arr[i] == 1) { // For 1
			arr[i] = arr[lastIndex];
			arr[lastIndex] = 1;
			lastIndex--;
		} else { // For 0
			i++;
		}
	}
}

int main() {
	int size;
	cin >> size;
	int arr[100000];
	
	for (int i = 0; i < size; ++i) {
		cin >> arr[i];
	}

	sortZeroesAndOne(arr, size);

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}

	cout << endl;
}
