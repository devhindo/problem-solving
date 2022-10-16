#include <bits/stdc++.h>
using namespace std;


string PrintBinary(int n) { 
    if(n > pow(2,0)) {
        return "";
    } 
    else {
        for(int i=0; i<n; i++) {
        if(pow(2,i) > n) {
            return "0" + PrintBinary(n);
        } else if(pow(2,i) == n) {
            return "1" + PrintBinary(n-pow(2,i));
        }
    }
    }
}

int main() {
    int t,n;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        cout << PrintBinary(n) << endl;
    }
}