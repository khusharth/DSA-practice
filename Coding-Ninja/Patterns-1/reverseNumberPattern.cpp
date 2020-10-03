/*
Code : Reverse Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4

1
21
321
4321

Input format :

Integer N (Total no. of rows)

Output format :

Pattern in N lines

Constraints

0 <= N <= 50

Sample Input 1:

5

Sample Output 1:

1
21
321
4321
54321
*/


#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int currRow = 1; // i
	while(currRow <= n) {
		int currCol = currRow; // j
		while(currCol >= 1) {
			cout << currCol ;
			currCol--;
		}
		cout<<endl;
		currRow++;
	}
}
