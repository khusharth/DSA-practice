/*
Basic Pattern 1

Print the following pattern
Pattern for N = 4

   1
  23
 456
78910

Input Format :

N (Total no. of rows)

Output Format :

Pattern in N lines
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int i = 1; // i = no. of rows
	int val = 1; // value to print in each row
	while(i <= n) {
		// Print spaces = (n-i)
		int spaces = 1;
		while(spaces <= n-i) {
			cout<<" ";
			spaces++;
		}
	
		int j = 1; // j = no. of cols
		while (j <= i) {
			// We need to rest j back to 1 to maintain no. of cols
			// So for printing a value we use another variable (val)
			cout<<val;
			j++; 
			val++;
		}
		cout<<endl;
		i++;
	}
}
