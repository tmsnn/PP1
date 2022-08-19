#include <bits/stdc++.h>
using namespace std;

int findNthNumber(int a[], int x, int n){
    int diff = 0, ans = 0, cnt = x;
    bool found = false;
    if(a[0] != 1){
        diff = a[0]-1;
        if (diff >= cnt) return cnt;
        cnt -= diff;
    }
    for(int i = 0 ; i < n - 1; i++){  
        diff = 0;
        if((a[i] + 1) != a[i + 1]){
            diff += (a[i + 1] - a[i]) - 1;
            if(diff >= cnt){
                ans = a[i] + cnt;
                found = true;
                break;
            }
            else cnt -= diff;
        }
    }
    if(found) return ans;
    else return  -1;
}

int main(){
    int arr[51], i = 0, A_i;
    while(cin >> A_i) arr[i++] = A_i;
    int x; x = arr[--i];
    cout << findNthNumber(arr, x, i);
}
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> seq;

// int findNthNumber(int arr[], int x, int n){
//     // int num = 1;
//     bool missing = true;
//     for(int i = 0; i < 101; i++){
//         missing = true;
//         for(int j = 0; j < n; j++){
//             if(arr[j] == i + 1) missing = false;
//         }
//         if(missing) seq.push_back(i + 1);
//     }
//     return seq[x - 1];
// }


// int missingK(int a[], int k, int n){
//     int difference = 0, ans = 0, count = k;
//     bool flag = 0;
//     if (a[0] != 1){
//         difference = a[0]-1;
//         if (difference >= count) return count;
//         count -= difference;
//     }
//     for(int i = 0 ; i < n - 1; i++){  
//         difference = 0;
//         if((a[i] + 1) != a[i + 1]){
//             difference += (a[i + 1] - a[i]) - 1;
//             if(difference >= count){
//                 ans = a[i] + count;
//                 flag = 1;
//                 break;
//             }
//             else count -= difference;
//         }
//     }
//     if(flag) return ans;
//     else return  -1;
// }

// int main(){
//     int arr[51], i = 0, A_i;
//     while(cin >> A_i) arr[i++] = A_i;
//     int x; x = arr[--i];
//     // cout << findNthNumber(arr, x, i);

//     cout << missingK(arr, x, i);

//     // for(auto i : seq) cout << i << ' ';
// }