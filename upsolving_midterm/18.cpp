#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n;
    while(true){
        cin >> n;
        if( n < 0) break;
        v.push_back(n);
    }
    double total = 0, ecnt = 0, ocnt = 0;
    for(int i = 0; i < v.size(); i++){
        total = v.size();
    }
        for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0) ecnt++;
        else if(v[i] % 2 != 0) ocnt++;
    }
    cout << fixed << setprecision(5) << (ecnt*100) / total << " "<< (ocnt*100) / total;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, sz = 0;
//     int arr[10001];
//     while(true){
//         cin >> n;
//         if(n < 0) break;
//         arr[sz++] = n;
//     }
//     double ev_cnt = 0, odd_cnt = 0;
//     for(int i = 0; i < sz; i++){
//         if(arr[i] % 2) ev_cnt++;
//         else odd_cnt++;
//     }
//     double full = sz;
//     cout << fixed << setprecision(5) << (odd_cnt * 100) / full << ' ';
//     cout << fixed << setprecision(5) << (ev_cnt * 100) / full;
// }