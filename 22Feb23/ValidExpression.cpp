//https://www.codechef.com/problems/EVALMAS

#include <iostream>
using namespace std;
#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    
	    string s;
	    int i = 0;
	    
	    if(x > 0){
	        for(; i < x-1; i++){
	            s.push_back('+');
	        }
	    }
	    else{
	        for(; i < (-1*x)+1; i++){
	            s.push_back('-');
	        }
	    }
	    
	    if(s.length() > n){
	        cout << -1 << endl;
	    }
	    else{
	        for(; i < n; i++){
	            s.push_back('*');
	        }
	        cout << s << endl;
	    }
	}
	return 0;
}
