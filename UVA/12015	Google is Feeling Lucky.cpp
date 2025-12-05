#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define F0R(i, n) for(int i = 0; i < n; i++)
#define R0F(i, n) for(int i = n - 1; i >= 0; i++)
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = b; i >= a; i--)
#define vii vector<int>

const int mod = 1e9 + 7;
const int m = 1e6 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, tc = 1; cin >> t;
    while(t--){
        vector<pair<string, int>> v(10);
        F0R(i, 10) cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end(), [](pair<string, int> &a, pair<string, int> &b){
            return a.second > b.second;
        });
        int j = v[0].second;
        cout << "Case #" << tc << ":\n";
        for(auto &i : v){
            if(i.second != j) break;
            cout << i.first << '\n';
        }
        tc++;
    }
    return 0;
}  
