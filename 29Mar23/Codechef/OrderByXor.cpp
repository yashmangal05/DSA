//https://www.codechef.com/START83C/problems/XOR_ORDER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int arr[3] = {a, b, c};
	    sort(arr, arr + 3);
	    
	    
	    if(a < b && b < c){
	        cout << 0 << endl;
	    }
	    else{
	        if(arr[2] - arr[1] > arr[0]){
	            cout << -1 << endl;
	        }
	        else if((b^a) < (c^a)){
	            cout << a << endl;
	        }
	        else{
	            cout << -1 << endl;
	        }
	    }
	    
	}
	return 0;
}
