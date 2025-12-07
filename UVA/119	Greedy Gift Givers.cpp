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
    int n; cin >> n;
    while(n != EOF){
        unordered_map<string, int> mp;
        vector<string> v;
        string s;
        F0R(i, n){
            cin >> s;
            mp[s] = 0;
            v.emplace_back(s);
        }
        int a, b;
        while(n--){
            cin >> s >> a >> b;
            if(b == 0) continue;
            if(a % b != 0) a -= (a % b);
            mp[s] -= a;
            F0R(i, b){
                cin >> s;
                mp[s] += (a / b);
            }
        }
        F0R(i, v.size()) cout << v[i] << " " << mp[v[i]] << '\n';
        cin >> n;
        if(n != EOF) cout << "\n";
    }
    return 0;
}  
