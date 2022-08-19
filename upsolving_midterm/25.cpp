#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t; cin >> s;
    t = s;
    reverse(s.begin(), s.end());
    if( s == t) cout << "YES";
    else cout << "NO";
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s; cin >> s;
//     string t = s;
//     reverse(s.begin(), s.end());
//     cout << (t == s ? "YES" : "NO");
// }