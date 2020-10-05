/*
Binary to decimal

Given a binary number as an integer N, convert it into decimal and print.
Input format :

An integer N in the Binary Format

Output format :

Corresponding Decimal number (as integer)

Constraints :

0 <= N <= 10^9

Sample Input 1 :

1100

Sample Output 1 :

12

Sample Input 2 :

111

Sample Output 2 :

7
*/


#include<iostream>
using namespace std;

int main() {
	
    int n;
    cin >> n;
    
    int power = 1, decimal = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        // if lastDigit = 1 then we add (1 * power) otherwise we add (0 * power ) = 0
        decimal += lastDigit * power;
        power *= 2;
        n = n / 10;
    }
    
    cout << decimal;
}
