#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool isSubstring(int start, string& check, string& str) {
	
	for(int i = 0; i < (int)str.size(); i++) {
		if( str[i] != check[start]){
			return false;
		}
		
		start++;
		start %= 8;
	}
	
	return true;
}
	
	

void solve() {
	
	int n;
	cin >> n;
	
	string str;
	cin >> str;
	
	string check = "FBFFBFFB";
	
	if (str[0] == 'F'){
		if(isSubstring(0, check , str) || isSubstring(2, check, str) || isSubstring(3,check, str) || isSubstring(5,check, str) || isSubstring(6,check, str)){
			cout << "YES" << endl;
			return;
		}
	}
	
	else if (str[0] == 'B') {
		if(isSubstring(1, check , str) || isSubstring(4, check, str) || isSubstring(7,check, str)){
			cout << "YES" << endl;
			return;
		}
	}
	
	cout << "NO" << endl;
	return;
}
	
	
	
	


int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int test;
	cin >> test;
	
	while(test--) {
		solve();
	}
}
