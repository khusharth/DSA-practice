/*
Decimal to Binary

Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Input format :

Integer N

Output format :

Corresponding Binary number (long)

Constraints :

0 <= N <= 10^5

Sample Input 1 :

12

Sample Output 1 :

1100

Sample Input 2 :

7

Sample Output 2 :

111

*/


#include<iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    // Consider the following example : Input n = 1024 and its binary equivalent is 10000000000, 
    // which involves 11 digits. And an integer cannot hold 11 digits, 
    // hence, it will go out of bound and give the wrong answer. Therefore we use long.
    long placeValue = 1, binary = 0;
    
    while (n > 0) {
        int rem = n % 2;
        binary += rem * placeValue;
        
        placeValue *= 10;
        n = n / 2;
    }
    
    cout << binary;
}

