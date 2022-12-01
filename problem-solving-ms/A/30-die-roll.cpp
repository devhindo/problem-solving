// https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int Y, W;
    cin >> Y >> W;
    Y = max(Y, W);
    W = 6 - Y + 1;
    if(W==6) cout << "1/1";
    else if(W==5) cout << "5/6";
    else if(W==4) cout << "2/3";
    else if(W==3) cout << "1/2";
    else if(W==2) cout << "1/3";
    else if(W==1) cout << "1/6";
}