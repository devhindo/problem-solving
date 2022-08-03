// Link : https://codeforces.com/contest/59/problem/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int numOfUpperCase=0, numOfLowerCase=0;
    cin >> s;
    for (int i=0; i<s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            numOfUpperCase++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            numOfLowerCase++;
        }
    }
    if (numOfUpperCase == numOfLowerCase) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else if (numOfUpperCase > numOfLowerCase) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;

}