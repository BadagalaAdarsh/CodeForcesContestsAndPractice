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
		int number = rand() % 5000;
		if (number == 0){
			number += 10;
		}
		for(int i = 0; i < n/2; i++){
			cout << number << " " << (-1*number) << " ";
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
