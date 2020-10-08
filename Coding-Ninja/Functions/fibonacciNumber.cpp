/*
Fibonacci Number

Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence

    F(n) = F(n-1) + F(n-2)

where F(0) = 0 and F(1) = 1


Input Format :

Integer N

Output Format :

true or false

Constraints :

0 <= n <= 10^4

Sample Input 1 :

5

Sample Output 1 :

true

Sample Input 2 :

14

Sample Output 2 :

false    
*/


/*
How to approach?
-> We can approach this problem by generating Fibonacci numbers till generated numbers are lessthan N.
-> If the generated number is equal to N, then it is a member of Fibonacci series, otherwise not
*/


#include<iostream>
using namespace std;

bool checkMember(int n){
    
    int a = 0;
    int b = 1;
    int c;
    
    while (a < n) {
    	c = a + b;
    	a = b;
    	b = c;
    }
    
    // This statement will return true if 'a' is equal to 'n', false otherwise.
    return a == n;
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}

