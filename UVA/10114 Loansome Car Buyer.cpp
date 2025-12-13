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
    double dp, l;
    int m, n; 
    while(cin >> m >> dp >> l >> n && m >= 0){ // m = months, dp = downpayment, l = loan, n = no. of depreciations
        double carPrice = dp + l;
        unordered_map<int, double> mp;
        F0R(i, n){
            int a; double b; cin >> a >> b;
            mp[a] = b;
        }
        double dp, lpm = l / m; //lpm = loan per month
        int j = 0;
        F0R(i, 101){
            if(mp.find(i) != mp.end()){
                dp = 1 - mp[i];
            }
            carPrice *= dp;
            if(carPrice > l) break;
            l -= lpm;
            j++;
        }
        if(j > 1 || j == 0) cout << j << " months" << '\n';
        else cout << "1 month" << '\n';
    }
    return 0;
}  
