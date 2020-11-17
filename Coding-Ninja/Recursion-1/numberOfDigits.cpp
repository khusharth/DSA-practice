/*
Number of Digits

Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
Input Format :

Integer n

Output Format :

Count of digits

Constraints :

1 <= n <= 10^6

Sample Input 1 :

 156

Sample Output 1 :

3

Sample Input 2 :

 7

Sample Output 2 :

1

*/

#include<iostream>
using namespace std;

int numberOfDigits(int n) {
	// Base case
	if (n == 0) {
		return 0; // No digit left
	}
	
	// Small output: Assume this for n / 10 (like n - 1)
	int smallAns = numberOfDigits(n / 10);
	
	// For nth number
	return smallAns + 1;
}

int main() {
	int n;
	cin >> n;
	
	cout << numberOfDigits(n) <<endl;
	return 0;
}
