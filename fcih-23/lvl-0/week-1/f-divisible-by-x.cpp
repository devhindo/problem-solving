#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,x;
    cin >> a >> b >> x;
    long long itr=0,mask=x;
    while(mask <= b) {
        mask += x;
        itr++;
    }
    cout << itr;
}