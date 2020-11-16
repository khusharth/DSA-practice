/*
* FACTORIAL
*/

#include<iostream>
using namespace std;

int factorial(int n) {
	// BASE CASE
	if (n == 0) {
		return 1;
	}
	
	// SMALL STEP: Dont question this / We assume this (By PMI)
	int smallOutput = factorial(n - 1);
	int output = n * smallOutput;
	
	return output;
}

int main() {
	int n;
	cin >> n;
	
	cout << factorial(n) << endl;
	return 0;
}
