#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   freopen("teleport.in", "r", stdin);
   freopen("teleport.out", "w", stdout);
   int a, b, c, d; cin >> a >> b >> c >> d;
   if(a > b) swap(a, b);
   if(c > d) swap(c, d);
   int sum1 = abs(a - c), sum2 = abs(b - d);
   int sum3 = sum1 + sum2;
   if(b - a >= sum3) cout << sum3;
   else cout << b - a;
   return 0;
}
