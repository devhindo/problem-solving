// Link : https://codeforces.com/contest/770/problem/A

#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    int n,k;
    vector<char> distinctChars;
    string password = "";
    cin >> n >> k;
    char alphapet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        for (int i = 0; i < k; i++) {
            distinctChars.push_back(alphapet[rand()%25]);
        }
        for (int j = 0; j < n; j++) {
            int indexer = 0;
            password = password + distinctChars[indexer];
            indexer++;
           

        }
    cout << password;
    
}

