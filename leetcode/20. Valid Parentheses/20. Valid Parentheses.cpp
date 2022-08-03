#include <iostream>
#include <stack>
#include <string>

using namespace std;

int isOpen(char s)
{
    switch (s)
    {
        case '(' : return 1; break;
        case '{' : return 2; break;
        case '[' : return 3; break;
        default:
            return 0;
    }
}
int isClose(char s)
{
    switch (s)
    {
        case ')' : return 1; break;
        case '}' : return 2; break;
        case ']' : return 3; break;
        default:
            return 0;
    }
}


bool isValid(string s)
{
    int i,c,open,close;
    stack<int> sequence;
    for(i=0; c=s[i]; i++) {
        if(isOpen(c)) {
            sequence.push('c');
        } else {
            close = isClose(c);
            open = sequence.top();
            if(open == close) {
                sequence.pop();
            } else {
                return false;
            }
        }
    }
    return true;
}



int main()
{
    cout << isValid("(([]]))");
}