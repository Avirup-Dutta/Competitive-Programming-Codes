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
const int M = 1e6 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m; cin >> n;
    m = n;
    ll sum = (n * (n + 1)) / 2;
    if(sum % 2 != 0) cout << "NO";
    else{
        cout << "YES" <<'\n';
        set<ll> s;
        ll half = sum / 2;
        while(half > 0){
            if(half - m < 0) break;
            half -= m;
            s.insert(m);
            m--;
        }
        if(half > 0) s.insert(half);
        cout << s.size() << '\n';
        for(auto &i : s) cout << i << " ";
        cout << '\n' << n - s.size() << '\n';
        FOR(i, 1, (int)n){
            if(s.find(i) != s.end()) continue;
            cout << i << " ";
        }
    }
    return 0;
}  
