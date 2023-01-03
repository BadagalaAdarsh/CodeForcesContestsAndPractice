#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
	
	int n;
	cin >> n;
	
	if( n&1 ) {
		cout << "NO" << endl;
		return;
	}
	
	else{
		cout << "YES" << endl;
		for(int i = 0; i < n/2; i++){
			cout << 5 << " " << -5 << " ";
		}
		cout << endl;
	}
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
