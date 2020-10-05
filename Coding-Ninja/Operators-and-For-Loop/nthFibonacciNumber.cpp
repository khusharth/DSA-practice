/*
Nth Fibonacci Number

Nth term of fibonacci series F(n) is calculated using following formula -

    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1

Provided N you have to find out the Nth Fibonacci Number.
Input Format :

Integer n

Output Format :

Nth Fibonacci term i.e. F(n)

Constraints:

1 <= n <= 25

Sample Input 1:

4

Sample Output 2:

3 

Sample Input 1:

6

Sample Output 2:

8
*/


#include<iostream>
using namespace std;

int main(){
	// Series: 0, 1, 1, 2, 3, 5, 8, 13 ....
    
    int n;
    cin>>n;
   
    int firstNum = 0;
    int secondNum = 1;
    int nextNum;
    
    for (int i=0; i<n; i++) {
        nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;
    }
    
    // Print firstNum not nextNum
    cout << firstNum << endl;
}
