/*
Multiplication (Recursive)

Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :

Line 1 : Integer M
Line 2 : Integer N

Output format :

M x N

Constraints :

0 <= M <= 1000
0 <= N <= 1000

Sample Input 1 :

3 
5

Sample Output 1 :

15

Sample Input 2 :

4 
0

Sample Output 2 :

0

*/

#include<iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    // BASE CASE
    if (n == 0) {
        return 0;
    }
    
    // Recursive step
    int smallAns = multiplyNumbers(m, n - 1);
    
    // Small Step
    return m + smallAns;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
    return 0;
}

