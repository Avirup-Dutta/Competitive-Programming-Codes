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

void print(bool flag){
    if(flag) cout << "Ordered" << '\n';
    else cout << "Unordered" << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, tc = 1; cin >> t;
    cout << "Lumberjacks:" << '\n';
    while(t--){
        vector<int> v(10);
        F0R(i, 10) cin >> v[i];
        bool flag = true;
        if(v[0] < v[1]){
            FOR(i, 2, 9){
                if(v[i - 1] > v[i]){
                    flag = false;
                    break;
                }
            }
            print(flag);
        }
        else{
            FOR(i, 2, 9){
                if(v[i - 1] < v[i]){
                    flag = false;
                    break;
                }
            }
            print(flag);
        }
        //cout << "Case " << tc << ": " << mx << '\n';
        //tc++;
    }
    return 0;
}  
