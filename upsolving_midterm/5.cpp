#include <bits/stdc++.h>
using namespace std;
int XOR(int x,int y){
    return (x^(y^(x+y)));
}
 int main(){
    int x,y;
    cin >> x >> y;
    cout << XOR(x,y);
}