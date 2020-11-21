/*
Count Zeros

Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Input Format :

Integer N

Output Format :

Number of zeros in N

Constraints :

0 <= N <= 10^9

Sample Input 1 :

10204

Sample Output 1 :

2

Sample Input 2 :

708000

Sample Output 2 :

4

*/

#include<iostream>
using namespace std;

int countZeros(int n) {
    // BASE CASE
    if (n <= 9) { // When n is single digit 
        if (n == 0) return 1; // If first digit = 0
        else return 0;
    }
    
    // Small Step
    int lastDigit = n % 10;
    int count = 0;
    if (lastDigit == 0) count = 1;
    
    // Recursive step
    return count + countZeros(n / 10);
    
}

int main() {
	int n;
    cin >> n;
    cout << countZeros(n) << endl;
	return 0;
}
