#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    a = a*4;
    b = b*3;
    c = atan(1)*4*2*c;
    multimap<double, string> m = {{a,"Square"},{b,"Triangle"},{c,"Circle"}};
    double o;
    double p = modf(m.begin()->first, &o);
    if(p) cout << m.begin()->second << " " << fixed << setprecision(2) << m.begin()->first;
     else cout << m.begin()->second << " " << m.begin()->first;
} 