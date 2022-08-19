#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // cin >> a[i][j];
            // cout << "[" << i << "; " << j << "]" << " ";
            if(n % 2 == 0){
            if(i >= j) cout << "#";
            else cout << ".";
            }
            else if(n % 2 == 1){
                if(i + j == n - 1) cout << "#";
                else if(i + j < n - 1) cout << ".";
                else cout << "#";
            }
        }
        cout << endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// int n;

// void Paradis(){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i + j >= n - 1) cout << '#';
//             else cout << '.';
//         }
//         cout << '\n';
//     }
// }

// void Marley(){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(j <= i) cout << '#';
//             else cout << '.';
//         }
//         cout << '\n';
//     }
// }

// int main(){
//     cin >> n;
//     n % 2 == 0 ? Marley() : Paradis();
// }