#include <bits/stdc++.h>
using namespace std ;

int main () {

    string s ;

    cin >> s;

    int idx = -1 ;

    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] >= 97){
            idx = i ;
        }
    }
    if (idx == 0) {
        for (int i = 1 ; i < s.size() ; i++) {
            s[i] = s[i] + 32 ;
        }
        s[0] = s[0] - 32 ;
    }
    else if (idx == -1)
        for (int i = 0 ; i < s.size() ; i++) {
            s[i] = s[i] + 32 ;
        }

    cout << s ;
}
