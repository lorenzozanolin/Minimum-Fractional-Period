#include <string>
#include <iostream>
using namespace std;

int periodNaive (string s) {
    int n = s.length();
    int r;
    string s1, s2;
    for (int p = 1; p <= n; p++) {
        r = n - p;
        s1 = s.substr(0, r);
        s2 = s.substr(p, r);
        if ( s1 == s2 )
            return p;
    }
    return n;
}

int main(){

    string s;
    cout<<"Inserire la stringa"<<endl;
    cin >> s;

    int periodN = periodNaive(s);
    cout<<"Periodo: "<<periodN<<endl;
    return 0;
}

