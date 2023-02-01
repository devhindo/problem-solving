#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("breedflip.in");
	ofstream fout("breedflip.out");
    int N,t=0,c=0;
    string A,B;
    fin >> N >> A >> B;
    for(int i=0; i<N; i++) {
        if(A[i]!=B[i]) {
            t++;
        } else {
            if(t) {
                c++;
                t=0;
            }
        }
    }
    fout << c << endl;
}
