/*
Code : Inverted Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4

4444
333
22
1

Input format :

Integer N (Total no. of rows)

Output format :

Pattern in N lines

Constraints :

0 <= N <= 50

Sample Input 1:

5

Sample Output 1:

55555 
4444
333
22
1

*/


#include<iostream>
using namespace std;

int main(){
	int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        int j = n - i + 1;
       // int val = n - i + 1;
        while (j > 0) {
        	// Directly printing value instead of creating a variable
            cout << n - i + 1;
            j--;
        }
        cout << endl;
        i++;
    }
}
