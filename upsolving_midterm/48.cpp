#include <bits/stdc++.h>
using namespace std;

void pure_word(string s){
    for(int i = 0; i < s.size(); i++){
        if(!('0' <= s[i] && s[i] <= '9')) cout << s[i];
    }
    cout << '\n';
}

int main(){
    string s;
    while(cin >> s) pure_word(s);
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; string temp = "";
//     while(cin >> s){
//         for(int i = 0; i < s.size(); i++){
//             if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
//                 temp += s[i];
//             }
//         }
//         cout << temp << endl;
//         temp = "";
//     }
//     return 0;
// }