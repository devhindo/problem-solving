// Link : https://codeforces.com/contest/268/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> homeKits;
    vector<int> awayKits;
    int numOfGamesWithOddKit = 0;
    for (int i = 0; i < n; i++) {
        int homeKit, awayKit;
        cin >> homeKit >> awayKit;
        homeKits.push_back(homeKit);
        awayKits.push_back(awayKit);
    }
    for (int homeKit : homeKits) {
        for (int awayKit : awayKits) {
            if (homeKit == awayKit) {
                numOfGamesWithOddKit++;
            }
        }
    }
    cout << numOfGamesWithOddKit;
}