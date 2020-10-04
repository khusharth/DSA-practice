/*
Code : Mirror Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4

	 1 
    12
   123
  1234

The dots represent spaces.

Input format :

Integer N (Total no. of rows)

Output format :

Pattern in N lines

Constraints

0 <= N <= 50

Sample Input 1:

3

Sample Output 1:

    1 
   12
  123
  
*/


#include<iostream>
using namespace std;

int main(){
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
        while (j <= i) {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}
