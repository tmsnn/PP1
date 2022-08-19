#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> v;
    vector <int> s;
    for(int i = 0; i < n; i++){
        int k; cin >> k; 
        v.push_back(k);
    }
    for(int i = 0; i < v.size(); i++){
        s.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    if( v == s) cout << "Sorted";
    else cout << "Not sorted";
}
// #include <bits/stdc++.h>
// using namespace std;

// bool isSorted(int a[], int n){
//     for(int i = 0; i < n - 1; i++){
//         if(a[i] > a[i + 1]) return false;
//     }
//     return true;
// }

// int main(){
//     int n; cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     cout << (isSorted(arr, n) ? "Sorted" : "Not sorted");
// }