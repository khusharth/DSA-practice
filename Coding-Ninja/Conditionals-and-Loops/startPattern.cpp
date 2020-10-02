/*
Start Pattern

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

Sample Input 2 :

4

Sample Output 2 :

    *
   *** 
  *****
 *******
*/

// For all the pattern questions 2 variables are used for row and col
// Identify other variables you need to print the pattern eg: spaces, stars etc. 

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int i = 1;
	// stars used to keep count of stars in each row
	int stars = 1;
	while(i <= n) {
		// print spaces (n-i)
		int spaces = 1;
		while(spaces <= n-i) {
			cout <<" ";
			spaces++;
		}
		
		// j for no. of cols
		int j = 1;
		while(j <= stars) {
			cout<<"*";
			j++;
		}
		// increment stars after printing a row
		stars = stars + 2;
		cout<<endl;
		i++;
	}
}
