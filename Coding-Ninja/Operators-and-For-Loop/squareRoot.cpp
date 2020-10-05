/*
Square Root (Integral)

Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :

Integer N

Output Format :

Square root of N (integer part only)

Constraints :

0 <= N <= 10^8

Sample Input 1 :

10

Sample Output 1 :

3

Sample Input 2 :

4

Sample Output 2 :

2
*/


#include<iostream>
using namespace std;

int sqrt(int x) { 
    // Staring from 0, try all numbers until 
    // output * output is greater than or equal to x. 
    int output = 0; 
    while (output * output <= x) { 
      output += 1; 
    } 
    
    // - 1 as we want output * output just smaller than x 
    return output - 1; 
} 

int main() {
	int n;
    cin >> n;
    cout << sqrt(n);
}
