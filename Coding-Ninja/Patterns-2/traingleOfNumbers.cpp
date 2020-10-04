/*
Code : Triangle of Numbers

Print the following pattern for the given number of rows.
Pattern for N = 4


The dots represent spaces.

      1
     232
    34543
   4567654


Input format :

Integer N (Total no. of rows)

Output format :

Pattern in N lines

Constraints :

0 <= N <= 50

Sample Input 1:

5

Sample Output 1:

       1
      232
     34543
    4567654
   567898765

*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        // print spaces
        int spaces = 1;
        while (spaces <= n - i) {
            cout << " ";
            spaces++;
        }
        
        int j = 1;
        int val = i;
        while (j <= i) {
            cout<<val;
            j++;
            val++;
        }
        
        // we can reassign val as it will reset to i in every loop/row.
    	val = 2 * (i - 1);
        while (val >= i) {
            cout << val;
            val--;
        }
        
        cout << endl;
        i++;
    }
}
