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

struct category{
    int a, b;
    vector<int> vec;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a; 
    while(cin >> n >> m && n != 0){
        unordered_set<int> arr;
        F0R(i, n){
            cin >> a;
            arr.insert(a);
        }
        vector<category> v(m);
        F0R(i, m){
            cin >> v[i].a >> v[i].b;
            vector<int> temp(v[i].a);
            F0R(j, v[i].a) cin >> temp[j];
            v[i].vec = temp;
        }
        int cnt;
        bool flag = false;
        for(auto &[a, b, vec] : v){
            cnt = 0;
            for(auto &j : vec){
                if(arr.find(j) != arr.end()) cnt++;
                if(cnt >= b) break;
            }
            if(cnt < b){
                flag = true;
                break;
            }
        }
        if(flag) cout << "no";
        else cout << "yes";
        cout << '\n';
    }
    return 0;
}  
