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
    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
         vector<pair<int, vector<int>>> mp;
         bool flag = false; int pr, mn = INT_MAX;
         while(h--){
            int p; cin >> p;
            vector<int> temp(w);
            F0R(i, w) cin >> temp[i];
            mp.push_back({p, temp});
         }
         for(auto &i : mp){
            pr = i.first * n;
            if(pr > b) continue;
            for(auto &j : i.second){
                if(j >= n){
                    flag = true;
                    mn = min(mn, pr);
                    break;
                }
            }
         }
         if(flag) cout << mn << '\n';
         else cout << "stay home" << '\n';
    }
    return 0;
}
