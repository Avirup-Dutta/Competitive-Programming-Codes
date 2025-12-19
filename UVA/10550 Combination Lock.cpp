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

int chk(int a, int b){
    if(b <= a) return abs(a - b);
    return 40 - b + a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d;
    while(cin >> a >> b >> c >> d && (a != 0 || b != 0 || c != 0 || d != 0)){
        cout << 1080 + chk(a, b) * 9 + chk(c, b) * 9 + chk(c, d) * 9 << '\n';
    }
    return 0;
}  
