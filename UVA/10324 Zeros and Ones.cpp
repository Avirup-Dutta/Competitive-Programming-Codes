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
    int tc = 1;
    string s;
    while(getline(cin, s)){
        int n, a, b; cin >> n;
        cout << "Case " << tc << ":" << '\n';
        while(n--){
            cin >> a >> b;
            if(a == b) cout << "Yes" << '\n';
            else{
                if(a > b) swap(a, b);
                bool flag = true;
                FOR(i, a + 1, b){
                    if(s[a] != s[i]){
                        flag = false;
                        break;
                    }
                }
                if(flag) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        tc++;
    }
    return 0;
}  
