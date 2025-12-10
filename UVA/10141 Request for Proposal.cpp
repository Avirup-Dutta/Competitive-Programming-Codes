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
    int n, p, tc = 1;
    cin >> n >> p;
    while(n > 0 && p > 0){
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string s, ans;
        F0R(i, n) getline(cin, s);
        int temp = INT_MIN; double temp1 = (double)1e18;
        F0R(i, p){
            string s1;
            bool flag = false;
            getline(cin, s1);
            double a; int b; cin >> a >> b;
            if(temp < b && b != 0){
                temp = b;
                temp1 = a;
                ans = s1;
            }
            else if(temp == b){
                if(temp1 > a){
                    ans = s1;
                    temp1 = a;
                }
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            F0R(j, b) getline(cin, s);
        }
        cout << "RFP #" << tc << '\n';
        cout << ans << '\n';
        tc++;
        cin >> n >> p;
        if(n > 0 && p > 0) cout << '\n';
    }
    return 0;
}  
