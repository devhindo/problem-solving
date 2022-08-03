// Link :

#include <iostream>
#include <vector>

using namespace std;

int main() 
    {
        int s1,s2,s3,s4;
        cin >> s1 >> s2 >> s3 >> s4;
        vector<int> uniqueColors;
        uniqueColors.push_back(s1);
        if(s2 != s1) {
            uniqueColors.push_back(s2);
        }
        if((s3 != s2) && (s3 != s1)) {
            uniqueColors.push_back(s3);
        }
        if(s4 != s3 && s4 != s2 && s4 != s1) {
            uniqueColors.push_back(s4);
        }
        cout << 4 - uniqueColors.size();


    }
    
