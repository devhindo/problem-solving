#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<double,double>x,y,z;
    cin>>x.first>>x.second>>y.first>>y.second>>z.first>>z.second;
    double f = (x.second-y.second)/(x.first-y.first);
    double g = (y.second-z.second)/(y.first-z.first);

    if(abs(f)==abs(g)) cout << "Yes";
    else cout << "No";
}