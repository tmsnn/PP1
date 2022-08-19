#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b; cin >> a >> b;
    for(int i = -60; i<= 60;i++){
        if(a * pow(2, i) == b){
            cout << "YES " << i;
            return 0;
        }
      
    }
    cout << "NO";
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     long long a, b; cin >> a >> b;
//     int n = -60;
//     while(n <= 60){
//         if(a * pow(2, n) == b){
//             cout << "YES " << n;
//             return 0;
//         }
//         n++;
//     }
//     cout << "NO";
// }