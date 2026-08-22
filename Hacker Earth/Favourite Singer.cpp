#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, a; cin >> n;
    unordered_map<long long, int> mp;
    while(n--){
        cin >> a;
        mp[a]++;
    }
    int mx = INT_MIN, cnt = 0;
    for(auto &[b, c] : mp){
        if(mx < c){
            mx = max(mx, c);
            cnt = 1;
        }
        else if(mx == c) cnt++;
    }
    cout << cnt;
    return 0;
}
