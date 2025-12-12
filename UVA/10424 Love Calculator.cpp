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

int oneDigSum(int sum){
    while(sum >= 10){
        int sum2 = 0;
        while(sum > 0){
            int b = sum % 10;
            sum2 += b;
            sum /= 10;
        }
        sum = sum2;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(2);
    int tc = 1;
    string s, s1;
    while(getline(cin, s)){
        getline(cin, s1);
        int sum = 0;
        F0R(i, s.size()){
            if(isalpha(s[i])){
                s[i] = tolower(s[i]);
                sum += ((s[i] - 'a') + 1);
            }
        }
        int a = oneDigSum(sum);
        sum = 0;
        F0R(i, s1.size()){
            if(isalpha(s1[i])){
                s1[i] = tolower(s1[i]);
                sum += ((s1[i] - 'a') + 1);
            }
        }
        int b = oneDigSum(sum);
        if(a > b) swap(a, b);
        cout << ((double)a / b) * 100 << " %" << '\n';
    } 
    return 0;
}  
