// Link : https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int numOfGamesPlayed, Anton=0, Danik=0;
    string s;
    cin >> numOfGamesPlayed >> s;
    for (int i = 0; i < numOfGamesPlayed; i++) {
        if (s[i] == 'A') {
            Anton++;
        }
        else {
            Danik++;
        }
    }
    if (Anton == Danik) {
        cout << "Friendship";
    }
    else if (Anton > Danik) {
        cout << "Anton";
    }
    else {
        cout << "Danik";
    }
}