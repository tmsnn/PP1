#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i - 1]) k--;
        else k *= 2;
    }
    cout << k;
}