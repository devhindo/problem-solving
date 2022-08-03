// Link : https://codeforces.com/contest/236/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
int main()
{
    string input;
    cin >> input;
    short count = input.length();
    vector <char> v(input.begin(), input.end());
    sort(v.begin(), v.end()); 
    for (int i=0; i < (input.length() - 1); i++) {
        if (v[i] == v[i + 1]) {
            count--;
        }
    }
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
}
 