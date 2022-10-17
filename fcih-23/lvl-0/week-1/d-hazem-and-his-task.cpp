#include <bits/stdc++.h>
using namespace std;
int main() {
    char c;
    cin >> c;
    if(islower(c)) {
        c = toupper(c);
    } else {
        c = tolower(c);
    }
    cout << c;
}