#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(){
    
    int sum ;
    cin >> sum;
    
    string answer = "";
    
    for(char ch = '9'; ch >= '1'; ch--){
        int num = ch - '0';
        if(sum - num >= 0 ){
            answer += ch;
            sum -= num;
        }
        else{
            continue;
        }
    }
    
    reverse(answer.begin(), answer.end());
    
    cout << answer << endl;
}


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int test;
    cin >> test;
    
    while(test--){
        solve();
    }
}
