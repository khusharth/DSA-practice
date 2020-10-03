/*
Code : Interesting Alphabets

Print the following pattern for the given number of rows.
Pattern for N = 5

E
DE
CDE
BCDE
ABCDE

Input format :

N (Total no. of rows)

Output format :

Pattern in N lines

Constraints

0 <= N <= 26

Sample Input 1:

8

Sample Output 1:

H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i) {
            cout<<ch;
            ch++;
            // OR cout << char(ch + j - 1)
            j++;
        }
        cout<<endl;
        i++;
    }   
}
