#include <bits/stdc++.h>
using namespace std;

int main () {
    int t ;

    cin >> t ;

    while (t--) {
        string s1 , s2 ,s2_check , s1_check;

        cin >> s1 >> s2 ;

        s1_check = s1 ;
        s2_check = s2 ;

        while(s1.size() != s2.size()) {
            if (s1.size() > s2.size()) {
                s2 += s2_check ;
            }
            else s1 += s1_check ;
        }

        if (s1 == s2) cout << s1 << "\n" ;
        else cout << -1 << "\n" ;
    }
}
