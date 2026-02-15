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

void printCalendar(int startingDay, int totalDates){
    vector<string> chart(35, " - ");
    int cnt = 1;
    cout << "|---------------------------|" << '\n';
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << '\n';
    cout << "|---------------------------|" << '\n';
    int dates = 1;
    for(int i = startingDay; i < 35; i++){
        chart[i] = to_string(dates);
        if(dates == totalDates) break;
        dates++;
    }
    if(dates < totalDates){
        int range2 = totalDates - dates;
        for(int i = 0; i <= range2; i++){
           chart[i] = to_string(dates);
           dates++;
        }
    }
    for(auto &i : chart){
        cout <<"|";
        if(i.size() == 2) cout << " " << i;
        else if(i.size() == 1) cout << "  " << i;
        else cout << i;
        if(cnt % 7 == 0) cout << "|" << '\n' << "|---------------------------|" << '\n';
        cnt++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, tc = 1; cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--){
        string s; getline(cin, s);
        int date, month, year;
        date = (s[0] - '0') * 10 + (s[1] - '0');
        month = (s[3] - '0') * 10 + (s[4] - '0');
        year = (s[6] - '0') * 1000 + (s[7] - '0') * 100 + (s[8] - '0') * 10 + (s[9] - '0');
        string day;
        FOR(i, 11, 13){
            day += s[i];
        }
        unordered_map<string, int> days = 
        {{"Sun", 0}, {"Mon", 1}, {"Tue", 2}, {"Wed", 3}, {"Thu", 4}, {"Fri", 5}, {"Sat", 6}};
        unordered_map<int, int> dates = 
        {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
        int range = (date / 7 + 1) * 7 - date + 1;
        int startingDay = (days[day] + range) % 7;
        if((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && month == 2) dates[month]++; 
        printCalendar(startingDay, dates[month]);
        if(t >= 1) cout << '\n';
    }
    return 0;
}  
