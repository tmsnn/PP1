#include <bits/stdc++.h>
using namespace std;

bool DegreeTwo(int x){
    int prod  = 1;
    while(prod < x){
        prod *=2;
    }
    if (prod == x) return true;
    return false;
}
 int main(){
     int n;
     cin >> n;
     int a[n];
     for(int i = 0;i < n;i++){
         cin >> a[i];
     }
    int s = a[0];
    for(int i = 1;i < n;i++){
        s = s ^ a[i];
    }
   if(DegreeTwo(s))cout << "YES";
   else cout << "NO";
 }