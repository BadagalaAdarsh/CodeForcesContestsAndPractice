#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
	
	int n;
	cin >> n;
	
	vector<int> cards(n);
	for(int i = 0; i < n; i++) cin >> cards[i];
	
	priority_queue<int> array;
	
	int army = 0;
	for(int i = 0; i < n; i++) {
		if(cards[i] != 0 ) {
			array.push(cards[i]);
		}
		else{
			if(!array.empty()){
				army += array.top();
				array.pop();
			}
		}
	}
	cout << army << endl;
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
