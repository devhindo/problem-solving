// Link : https://codeforces.com/contest/381/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numOfCards;
    cin >> numOfCards;
    vector<int> cards;
    for (int i = 0; i < numOfCards; i++) {
        int card;
        cin >> card;
        cards.push_back(card);
    }
    int serejaPoints = 0;
    int dimaPoints = 0;
    while (cards.size() > 0) {
        if (cards.front() >= cards.back()) {
            serejaPoints = serejaPoints + cards.front();
            cards.erase(cards.begin());
        }
        else {
            serejaPoints = serejaPoints + cards.back();
            cards.pop_back();
        }
        if (cards.empty()) {
            break;
        }
        if (cards.front() >= cards.back()) {
            dimaPoints = dimaPoints + cards.front();
            cards.erase(cards.begin());
        }
        else {
            dimaPoints = dimaPoints + cards.back();
            cards.pop_back();
        }

    }
    cout << serejaPoints << " " << dimaPoints << endl;
}