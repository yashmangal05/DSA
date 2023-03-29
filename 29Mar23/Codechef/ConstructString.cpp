//https://www.codechef.com/START83C/problems/CONSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string s;
	    cin >> n >> s;
	    
	    string temp = "";
	    char ans = ' ';
	    int count = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(ans != s[i]){
	            
	            if(count%2 == 0 && count != 0){
	                temp+=ans;
	            }
	            
	            temp+=s[i];
	            
	            ans = s[i];
	            
	            count = 1;
	        }
	        else{
	            count++;
	        }
	    }
	    
	    if(count%2 == 0 && count != 0){
	        temp+=ans;
	    }
	    cout << temp << endl;
	}
	return 0;
}
