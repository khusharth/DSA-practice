/*
Number Pattern 2

Print the following pattern
Pattern for N = 4

    1
   23
  345
 4567

Input Format :

N (Total no. of rows)

Output Format :

Pattern in N lines

Sample Input :

5

Sample Output :

     1
    23
   345
  4567
 56789
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int i = 1;
	while(i <= n) {
		int j = 1;
		// val starts from i in each row
		int val = i;
		int spaces = 1;
		while(spaces <= n-i) {
			cout<<" ";
			spaces++;
		}
		
		while(j <= i) {
			cout << val;
			j++;
			val++;
		}
		
		cout<<endl;
		i++;
	}
}
