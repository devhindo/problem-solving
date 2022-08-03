// Link : https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numOfStones;
    cin >> numOfStones;
    vector <char> stones;
    for (int i = 0; i < numOfStones; i++) {
        char stone;
        cin >> stone;
        stones.push_back(stone);
    }
    int stonesTaken = 0;
    for (int i = 0; i < stones.size() - 1; i++) {
        if (stones[i] == stones[i + 1]) {
            stonesTaken++;
        }
    }
    cout << stonesTaken;
}
