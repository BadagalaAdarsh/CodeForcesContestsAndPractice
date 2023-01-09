#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    int answer = (b > a) + (c > a) + (d > a);
    cout << answer << endl;
}


int main( ) {
    
    int test;
    cin >> test;
    
    while(test) {
        solve();
    }
}