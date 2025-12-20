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
    int t, tc = 1; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        if(n == 1 && m == 1) cout << 1 << '\n' << 1 << '\n';
        else if(n == 1){
            cout << 2 << '\n';
            for(int i = 1; i <= m; i++) cout << i << " ";
            cout << '\n';
        }
        else if(m == 1){
            cout << 2 << '\n';
            for(int i = 1; i <= n; i++) cout << i << '\n';
        }
        else{
            if(n <= m){
                if(m - n >= n) cout << n * 2 << '\n';
                else cout << m << '\n';
                for(int i = 1; i <= n; i++){
                    int p = i;
                    for(int j = 1; j <= m; j++){
                        cout << p << " ";
                        if(p == m) p--;
                        p++;
                    }
                    cout << '\n';
                }         
            }else{
                if(n - m >= m) cout << m * 2 << '\n';
                else cout << n << '\n';
                for(int i = 1; i <= n; i++){
                    int p = i;
                    for(int j = 1; j <= m; j++){
                        cout << p << " ";
                        if(p == n) p--;
                        p++;
                    }
                    cout << '\n';
                }         
            }
        }
    }
    return 0;
}  
