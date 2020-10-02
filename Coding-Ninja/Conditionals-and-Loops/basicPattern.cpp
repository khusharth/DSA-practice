/*
Basic Pattern

Print the following pattern
Pattern for N = 4

1
12
123
1234

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

	// starting row
	int i = 1;
	// total rows (range)
	while(i <= n) {
		// starting col
		int j = 1; 
		// total col in each row (range)
		while(j <= i) {
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
}
