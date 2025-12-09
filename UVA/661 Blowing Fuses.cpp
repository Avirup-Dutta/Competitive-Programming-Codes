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
    int n, m, c, tc = 1;
    while(cin >> n >> m >> c && n > 0 && m > 0 && c > 0){
        unordered_map<int, int> mp;
        vector<int> arr(n), v(m);
        F0R(i, n){
            cin >> arr[i];
            mp[i] = 0; 
        }
        F0R(i, m){
            cin >> v[i];
            v[i]--;
        }
        int mx = INT_MIN;
        bool flag = true;
        for(auto &i : v){
            if(mp[i] == 0) mp[i] = 1;
            else mp[i] = 0;
            int sum = 0;
            for(auto &j : mp){
                if(j.second == 1) sum += arr[j.first];
            }
            if(sum > c){
                flag = false;
                break;
            }
            mx = max(sum, mx);
        }
        cout << "Sequence " << tc << '\n';
        if(flag){
            cout << "Fuse was not blown." << '\n';
            cout << "Maximal power consumption was " << mx << " amperes." << '\n';
        }
        else cout << "Fuse was blown." << '\n';
        tc++;
        cout << '\n';
    }
    return 0;
}  
