#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int x = s.size() + 2;
    while ( x != 0 ) {
        cout << '+';
        x--;
    }
    cout << endl;
    cout << '+' << s << '+' << endl;
    x = s.size() + 2;
    while ( x != 0 ) {
        cout << '+';
        x--;
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s; cin >> s;
//     for(int i = 1; i <= 3; i++){
//         for(int j = 0; j < s.size() + 2; j++){
//             if(i != 2) cout << '+';
//             else{
//                 if(j == 0 || j == s.size() + 1) cout << '+';
//                 else cout << s[j-1];
//             }
//         }
//         cout << '\n';
//     }
// }