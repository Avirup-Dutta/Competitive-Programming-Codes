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
    int n; cin >> n;
    vector<ull> v(n);
    F0R(i, n) cin >> v[i];
    ull sum = 0;
    FOR(i, 1, n - 1){
        if(v[i - 1] > v[i]){
            ull temp = v[i - 1] - v[i];
            sum += temp;
            v[i] += temp;
        }
    }
    cout << sum << '\n';
    return 0;
}  
