#include<bits/stdc++.h>
using namespace std;
const int n = 1e5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, str[n]; getline(cin, s);
    int cnt = 0;
    for(auto &i : s){
        if(i == ' '){
            cnt++;
            continue;
        }
        i = toupper(i);
        str[cnt] = str[cnt] + i;
    }
    for(int i = 0; i <= cnt; i++) cout << str[i] << '\n';
    return 0;
}
