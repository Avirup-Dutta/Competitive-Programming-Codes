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
        int n; cin >> n;
        string s; cin >> s;
        int a;
        bool flag = false;
        for(int i = 0; i < n; i++){
            a = s[i] - '0';
            for(int j = i + 1; j < n; j++){
                a *= 10;
                a += s[j] - '0';
                if(a % (j - i + 1) != 0){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}  
