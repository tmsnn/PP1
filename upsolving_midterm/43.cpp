#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
         int sum = 0;
        for(int j = 0; j < m; j++)
            sum += a[i][j];
            cout << sum / m << " ";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m, x, summ; cin >> n >> m;
//     int ans[n];
//     for(int i = 0; i < n; i++){
//         summ = 0;
//         for(int j = 0; j < m; j++){
//             cin >> x; summ += x;
//         }
//         ans[i] = summ / m;
//     }
//     for(int i = 0; i < n; i++) cout << ans[i] << ' ';
// }