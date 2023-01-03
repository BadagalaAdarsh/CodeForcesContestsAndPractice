#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
	
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	int answer;
	
	int rCount = 0, lCount = 0;
	
	for(char ch : s) {
		if(ch == 'R')
			rCount++;
		else if(ch == 'L')
			lCount++;
	}
	
	if(rCount == 0 || lCount == 0) answer = -1;
	
	else if (rCount >= 1 && lCount >= 1){
		for(int i = 0; i < n - 1; i++) {
			if(s[i] == 'R' && s[i+1] == 'L'){
				cout << 0 << endl;
				return ;
			}
		}
		
		for(int i = 0; i < n - 1; i++) {
			if(s[i] == 'L' && s[i+1] == 'R'){
				cout << (i+1) << endl;
				return;
			}
		}
	}
	
	
	cout << answer << endl;
	
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
