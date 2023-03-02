#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int traverse(string &str, int index, char ch) {
	
	while(str[index] == ch) {
		index++;
	}
	return index;
}

void solve() {
	
	int n;
	cin >> n;
	
	string str;
	cin >> str;
	
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	
	if(str[0] != 'm' || str[n-1] != 'w'){
		cout << "NO" << endl;
		return;
	}
	
	int index = 0;
	int prevIndex = 0;
	index = traverse(str,index,'m');
	if(index == prevIndex){
		cout << "NO" << endl;
		return;
	}
	prevIndex = index;
	index = traverse(str, index,'e');
	if(index == prevIndex){
		cout << "NO" << endl;
		return;
	}
	prevIndex = index;
	index = traverse(str,index,'o');
	if(index == prevIndex){
		cout << "NO" << endl;
		return;
	}
	prevIndex = index;
	index = traverse(str,index,'w');
	if(index == prevIndex){
		cout << "NO" << endl;
		return;
	}
	prevIndex = index;
	
	
	if(index == n) {
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	

}
	
				
			
		



int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int test;
	cin >> test;
	
	while(test--) {
		
		solve() ;
	}
}
