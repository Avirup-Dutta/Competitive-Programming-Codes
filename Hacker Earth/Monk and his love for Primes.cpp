#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int sum = 0;
    for(auto &i : s){
        if(isupper(i)){
            i = tolower(i);
            sum -= (int)i;
        }
        else{
            i = toupper(i);
            sum += (int)i;
        }
    }
    sum = abs(sum);
    bool flag = true;
    for(int i = 2; i <= sqrt(sum) + 1; i++){
        if(sum % i == 0){
            flag = false;
            break;
        }
    }
    if(flag || sum == 0) cout << 1;
    else cout << 0;
    cout << '\n';
    return 0;
}
