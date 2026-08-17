#include<bits/stdc++.h>
using namespace std;
const int n = 1e5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        unsigned long long sum = 0, b = 1;
        while(n > 0){
            n--;
            int num = s[n] - '0';
            if(num == 1){
                sum += b;
            }
            b <<= 1;
        }
        cout << sum << '\n';
    }
    return 0;
}
