/*
Check Palindrome (recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :

String S

Output Format :

'true' or 'false'

Constraints :

0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :

racecar

Sample Output 1:

true

Sample Input 2 :

ninja

Sample Output 2:

false

*/

/*
	Time Complexity: O(n)
	Space Complexity: O(n)
	where n is size of array
*/

#include<iostream>
using namespace std;

int len(char input[]) {
    int len = 0;
    for (int i=0; input[i] != '\0'; i++) {
        len++;
    }
    return len;
    
}

bool helper(char input[], int start, int end) {
    // BASE CASE
    if (start > end)
        return true;
    
    // Small Calulation
    if (input[start] != input[end]) {
        return false;
    }
    
    // Recursive STEP
    return helper(input, start + 1, end - 1);
}

bool checkPalindrome(char input[]) {

    int n = len(input);
    
    if (n == 0 || n == 1)
        return true;
         
	return helper(input, 0, n - 1);   
}

int main() {
	char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
	return 0;
}
