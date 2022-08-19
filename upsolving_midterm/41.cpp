#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if(cnt < sum) cnt = sum;
    }
    cout << cnt;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m, x, summ, mx_sum = -9999; cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         summ = 0;
//         for(int j = 0; j < m; j++){
//             cin >> x; summ += x;
//         }
//         if(summ > mx_sum) mx_sum = summ;
//     }
//     cout << mx_sum;
// }