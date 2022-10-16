#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    a = a*4;
    b = b*3;
    c = atan(1)*4*2*c;
    double biggest = max(a,max(b,c));
    if(biggest == a) {
        cout << "Square " << biggest;
    } else if(biggest == b) {
        cout << "Triangle " << biggest;
    } else {
        cout << "Circle " << biggest;
    }
}