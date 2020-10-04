/*
Code : Star Pattern

Print the following pattern
Pattern for N = 4

    *
   *** 
  *****
 *******
The dots represent spaces.

Input Format :

N (Total no. of rows)

Output Format :

Pattern in N lines

Constraints :

0 <= N <= 50

Sample Input 1 :

3

Sample Output 1 :

   *
  *** 
 *****

*/

#include<iostream>
using namespace std;

// My sol = using stars variable
/*
int main(){

    int n;
    cin >> n;
    
    int i = 1;
    int stars = 1; // For keeping count of stars in each row
    while (i <= n) {
        int spaces = 1;
        while (spaces <= n - i) {
            cout << " ";
            spaces++;
        }
        
        int j = 1;
        while(j <= stars) {
            cout << "*";
            j++;
        }
        cout << endl;
        stars = stars + 2;
        i++;
    }
}
*/

// CN Sol without stars variable 

int main(){

    int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        int spaces = 1;
        while (spaces <= n - i) {
            cout << " ";
            spaces++;
        }
        
        int j = 1;
        // no. of stars = 2 * row - 1
        while(j <= (2 * i) - 1) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

