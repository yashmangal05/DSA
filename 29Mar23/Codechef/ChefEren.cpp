//https://www.codechef.com/START83C/problems/CHEFEREN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    cout << ((a/2)*b) + ((a-(a/2))*c) << endl;
	}
	return 0;
}
