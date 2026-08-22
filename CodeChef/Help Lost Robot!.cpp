#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
        if(y1 == y2){
            if(x1 < x2) cout << "right";
            else cout << "left";
        }
        else if(x1 == x2){
            if(y1 < y2) cout << "up";
            else cout << "down";
        }
        else cout << "sad";
        cout << '\n';
    }
    return 0;
}
