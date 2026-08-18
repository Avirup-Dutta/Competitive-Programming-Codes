#include<bits/stdc++.h>
using namespace std;
const int n = 1e5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, a; cin >> n;
        long long int b = 1;
        while(n--){
            cin >> a;
            b *= a;
        }
        if(b % 10 == 2 || b % 10 == 3 || b % 10 == 5) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}
