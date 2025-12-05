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
        int n, m = 0, j = 0; cin >> n;
        while(n--){
            int a; cin >> a;
            m += ((a / 30) + 1) * 10;
            j += ((a / 60) + 1) * 15;
        }
        cout << "Case " << tc << ": ";
        if(m < j) cout << "Mile " << m;
        else if(m > j) cout << "Juice " << j;
        else cout << "Mile Juice " << m;
        cout << '\n';
        tc++;
    }
    return 0;
}  
