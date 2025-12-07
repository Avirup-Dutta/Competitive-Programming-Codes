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
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this piece of code was used because I was getting buffer issues 
                                                             //for using a "cin >>" before getline(cin, s) as "cin >>" by default creates a newline
        vector<int> v(n);
        F0R(i, n){
            string s; getline(cin, s);
            if(s == "LEFT") v[i] = -1;
            else if(s == "RIGHT") v[i] = 1;
            else{
                int a = s.size(), b;
                if(a == 9){
                    b = s[a - 1] - '0';
                }
                else{
                    b = (s[a - 2] - '0') * 10 + s[a - 1] - '0';
                }
                v[i] = v[b - 1];
            }
        }
        int sum = 0;
        for(auto &i : v) sum += i;
        cout << sum << '\n';
    }
    return 0;
}  
