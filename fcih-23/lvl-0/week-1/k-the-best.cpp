#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    multimap<long long,string>m = {{a,"Amr"},{b,"Waleed"},{c,"Mustafa"},{d,"Youssef"}};
    if(m.begin()->first==(++m.begin())->first) cout << "We are the best";
    else cout << m.begin()->second;
}