/*
* FIBONACCI SERIES
*/

#include<iostream>
using namespace std;

int fibonacci(int n) {
	// Base case
	if (n == 0) {
		return 0;
	}	
	
	if (n == 1) {
		return 1;
	}
	
	// Small output: Assume this step
	// We use previous 2 steps to generate next step
	int smallOutput1 = fibonacci(n - 1);
	int smallOutput2 = fibonacci(n - 2);
	
	// Calculate for n
	return smallOutput1 + smallOutput2;
	
}
int main() {
	int n;
	cin >> n;
	
	cout << fibonacci(n) << endl;
	return 0;
}
