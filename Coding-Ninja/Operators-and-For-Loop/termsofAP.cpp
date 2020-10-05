/*
Terms of AP

Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :

Integer x

Output format :

Terms of series (separated by space)

Constraints :

1 <= N <= 1,000

Sample Input 1 :

10

Sample Output 1 :

5 11 14 17 23 26 29 35 38 41

Sample Input 2 :

4

Sample Output 2 :

5 11 14 17
*/


#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    
    // when don't know the limit use while loop
    int i = 1;
    while (x > 0) {
    int val = (3 * i) + 2; 
       if (val % 4 != 0) {
           cout<<val<<" ";
           x--;
       }
        i++;
    }
}
