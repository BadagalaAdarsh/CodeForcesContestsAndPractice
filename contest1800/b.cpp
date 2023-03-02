#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
	
	int n,k;
	cin >> n >> k;
	
	string str;
	cin >> str;
	
	vector<int> small(26,0);
	vector<int> capital(26,0);
	
	for(char ch: str) {
		if('a' <= ch && ch <= 'z') {
			small[ ch - 'a' ]++;
		}
		else{
			capital[ ch - 'A' ]++;
		}
	}
	
	int coins = 0;
	
	for(int i = 0; i < 26; i++ ){
		
		int minNumber = min(small[i], capital[i]);
		coins += minNumber;
		small[i] -= minNumber;
		capital[i] -= minNumber;
		
	}
	
	
	while(k > 0 ) {
		int i ;
		for(i = 0; i < 26; i++ ) {
			int diff = max(small[i], capital[i]) - min(small[i], capital[i]);
			diff /= 2;
			
			if (diff > k) {
				coins += k;
				cout << coins << endl;
				return;
			}
			else{
				coins += diff;
				k -= diff;
			}	
			
		}
		if (i == 26) break;
		
	}
		cout << coins << endl;
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
