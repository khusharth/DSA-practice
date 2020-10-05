/*
Count Characters

Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :

A stream of characters terminated by '$'

Output Format :

3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)

Sample Input :

abc def4 5$

Sample Output :

6 2 2
*/


#include<iostream>
using namespace std;

int main(){
 	char ch;
    ch = cin.get();
    int characters = 0, digits = 0, spaces = 0;
    
    while (ch != '$') {
        
        if (ch >= 'a' && ch <= 'z') {
            characters++;
        } else if (ch >= '0' && ch <= '9' ) {
            digits++;
        } else if (ch == ' ' || ch == '\n' || ch == '\t'){
            // space or new line or tabs
            spaces++;
        }
    	ch = cin.get();
    }
    
    cout << characters << " " << digits << " " << spaces; 
}

