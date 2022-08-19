#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
        cin >> a[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m; cin >> n >> m;
//     int arr[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++) cin >> arr[i][j];
//     }

//     for(int j = 0; j < m; j++){
//         for(int i = 0; i < n; i++) cout << arr[i][j] << ' ';
//         cout << '\n';
//     }
// }