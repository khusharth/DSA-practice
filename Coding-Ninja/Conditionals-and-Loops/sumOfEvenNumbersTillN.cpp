/*
Sum of Even Numbers till N

Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N

Output Format :
Required Sum 

Sample Input 1 :
 6

Sample Output 1 :
12
*/
#include<iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cin>>n;
	
	while(n != 0) {
		if (n % 2 == 0) {
			sum += n;
		}
		n--;
	}
	
	cout<<sum;
}

