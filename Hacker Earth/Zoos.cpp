#include<bits/stdc++.h>
using namespace std; 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	int cntz = count(s.begin(), s.end(), 'z'), cnto = count(s.begin(), s.end(), 'o');
	cout << ((cntz * 2 == cnto) ? "Yes" : "No");
	return 0;
}
