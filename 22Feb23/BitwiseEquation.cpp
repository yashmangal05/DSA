//https://www.codechef.com/problems/BITEQU

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[4];
	    if(n == 0){
	        arr[0] = 1;
	        arr[1] = 3;
	        arr[2] = 4;
	        arr[3] = 5;
	    }
	    else if(n == 1){
	        arr[0] = 1;
	        arr[1] = 4;
	        arr[2] = 3;
	        arr[3] = 2;
	    }
	    else if(n == 2){
	        arr[0] = 16;
	        arr[1] = 8;
	        arr[2] = 1;
	        arr[3] = 3;
	    }
	    else if(n == 3){
	        arr[0] = 16;
	        arr[1] = 8;
	        arr[2] = 1;
	        arr[3] = 2;
	    }
	    else if(n == 5){
	        arr[0] = 16;
	        arr[1] = 8;
	        arr[2] = 1;
	        arr[3] = 4;
	    }
	    else if(n % 2){
	        arr[0] = 2;
	        arr[1] = 4;
	        arr[2] = 1;
	        arr[3] = n-1; 
	    }
	    else{
	        arr[0] = 2;
	        arr[1] = 4;
	        arr[2] = 1;
	        arr[3] = n+1; 
	    }
	    for(int i = 0; i < 4; i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
