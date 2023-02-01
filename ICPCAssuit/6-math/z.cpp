#include <bits/stdc++.h>
using namespace std;

bool isSuperLucky(int n) {
    string s = to_string(n);
    int seven=0, four=0;
    for(auto c : s) {
        if(c=='7') seven++;
        else if(c=='4') four++;
        else return false;
    }
    return seven==four;
}

int main() {
    int r,s;
    cin >> r >> s;
    double sq = s*s;
    double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342;
    double cir = pi*r*r; 
    double dia = s*sqrt(2);
    if((r*2>=s) && (dia <= r*2)) cout << "Circle";
    else if((s>=r*2) && (dia >= r*2)) cout << "Square";
    else cout << "Complex";
}
