#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    for(int i = n; i <= m; i++){
        if(i % 2 == 0) cout << i << " ";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// void printer(int l, int r){
//     for(int i = l; i <= r; i++){
//         if(i % 2 == 0) cout << i << ' ';
//     }
// }

// int main(){
//     int l, r; cin >> l >> r;
//     printer(l, r);
// }