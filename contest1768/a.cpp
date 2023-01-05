#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
	
	int k;
	cin >> k;
	
	vector<int> factorial(k);
	
	factorial[0] = 1;
	
	long long int fact = 1;
	
	for(int i = 1; i < k ; i++) {
		fact *= i;
		factorial[i] = fact;
	}
	
	for(int i = k - 1; i > 0; i--){
		if ( (factorial[i] + factorial[i-1]) % k == 0) {
			cout << i << endl;
			return;
		}
	}
	
	cout << -1 << endl;
	
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
