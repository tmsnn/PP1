#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin >> n;
     int  a = 2, d = 3;
     for(int i = 0; i < n; i++){
         cout << a << ' ';
         a = a + d;
     }
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     int arr[n]; arr[0] = 2;
//     for(int i = 1; i  < n; i++) arr[i] = arr[i - 1] + 3;
//     for(int i = 0; i < n; i++) cout << arr[i] << ' ';
// }