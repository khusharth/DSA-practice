/*
Code : Diamond of stars

Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5

   *
  ***
 *****
  ***
   *
The dots represent spaces.



Input format :

N (Total no. of rows and can only be odd)

Output format :

Pattern in N lines

Constraints :

1 <= N <= 49

Sample Input 1:

3

Sample Output 1:

  *
 ***
  *

*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    // upper half of the star | rows = (n + 1)/2
    int i = 1;
    while (i <= (n + 1)/ 2) {
    	int spaces = 1;
    	// spaces =  total rows in upper half - i
    	while (spaces <= ((n + 1)/2) - i) {
    		cout << " ";
    		spaces++;
    	}
    	
    	int j = 1;
    	// no. of stars = row * 2 - 1
    	while (j <= (i * 2) - 1 ) {
    		cout << "*";
    		j++;
    	}
    	cout<<endl;
    	i++;
    }    
    
    // lower half of the star | rows = n/2
	i = 1;
	while (i <= n/2) {
		int spaces = 1;
		while (spaces <= i) {
			cout << " ";
			spaces++;
		}
		
		int j = 1;
		// no. of stars = n - (2 * row)
		while (j <= (n - (2* i))) {
			cout << "*";
			j++;
		}
		
		cout<<endl;
		i++;
	}
    
}
