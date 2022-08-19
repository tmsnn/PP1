#include <bits/stdc++.h>
using namespace std;

bool palindrom(string x){
     string t = x;
     reverse(x.begin(), x.end());
     if(t == x) return true;
     return false;
}

int main(){
    int n; cin >> n;
    string bit = "";
    for(int i = 0;i < 8; i++){
        bit += (n % 2) + '0';
        n /= 2;
    }
    cout << (palindrom(bit) ? "It works!" : "Sad");
}