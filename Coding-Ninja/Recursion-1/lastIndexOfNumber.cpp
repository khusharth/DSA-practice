/*

*/

#include<iostream>
using namespace std;

int lastIndex(int arr[], int size, int x) {
	// BASE CASE
    if (size == 0) 
        return -1;
    
    // In this case we NEED to perform recursive step first and small step after
    // So that we can count in reverse, we first go till size = 0 
    // and then start checking for arr[0] = x from last element
    // Recursive Step
    int smallAns = lastIndex(arr + 1, size - 1, x);
    
    // Small step
    if (smallAns == -1) {
        // check if first element is x before returning -1
        if (arr[0] == x)
        	return 0;
    	else
        	return -1;
    }
    
    return smallAns + 1;
}

int main() {
	int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;
	return 0;
}
