#include <iostream>
using namespace std;
int main(){
    int cnt=0, ans;
    string s; cin >> s;
    for(int i=1;i<s.size();i++){
        cnt += int(s[i])-'0';
        ans = int(s[0]) - '0';
    }
    if(cnt % 10 == ans) cout << "YES";
    else cout << "NO";
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s; cin >> s;
//     int sum = 0;
//     for(int i = 1; i < s.size(); i++) sum += s[i] - '0';
//     cout << (s[0] - '0' == sum % 10 ? "YES" : "NO");
// }