#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    int ocnt=0, dcnt=0, hcnt = 0;
    for (int i = 0; i<n; i++){
    if (a[i] == 'H') hcnt++;
    if (a[i] == 'D') dcnt++;
    if (a[i] == 'O') ocnt++;}
    int D = dcnt/3;
    int H = hcnt/3;
    int O = ocnt/3;
    cout << "Orks: " << O << endl;
    cout << "Dragons: " << D << endl;
    cout << "Humans: " << H << endl;
     
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     char x;
//     int h_cnt = 0, o_cnt = 0, d_cnt = 0;

//     while(n--){
//         cin >> x;
//         if(x == 'H') h_cnt++;
//         else if(x == 'D') d_cnt++;
//         else o_cnt++;
//     }

//     cout << "Orks: " << o_cnt / 3;
//     cout << "\nDragons: " << d_cnt / 3;
//     cout << "\nHumans: " << h_cnt / 3;
// }