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
    int n; cin >> n;
    vector<string> v(n), h(3);
    h[0] = "Happy", h[1] = "birthday", h[2] = "to";
    F0R(i, n) cin >> v[i];
    if(n <= 16){
        int i = 0, j = 0, k = 0;
        while(j <= 15){
            cout << v[i] << ": ";
            if(k == 3){
                if(j != 11) cout << "you" << '\n';
                else cout << "Rujia" << '\n';
            }
            else cout << h[k] << '\n';
            i++, j++, k++;
            if(i == n) i = 0;
            if(k == 4) k = 0;
        }
    }
    else{
        int i = 0, j = 0, k = 0, l = 0;
        while(l < n || j < 16){
            cout << v[i] << ": ";
            if(k == 3){
                if(j != 11) cout << "you" << '\n';
                else cout << "Rujia" << '\n';
            }
            else cout << h[k] << '\n';
            i++, j++, k++, l++;
            if(i == n) i = 0;
            if(k == 4) k = 0;
            if(l < n && j == 16) j = 0;
        }
    }
    return 0;
}  
