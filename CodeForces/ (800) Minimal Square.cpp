#include <bits/stdc++.h>
using namespace std ;

int main () {
    int t ;

    cin >> t ;

    while (t--) {
        int c , d , a , b ,res;

        cin >> c >> d ;

        a = min(c,d) ;
        b = max(c,d) ;

        if (2*a >= b && 2*a <= 2*b) {
            res = 2*a ;
        }
        else res = b ;

        cout << res*res << "\n" ;
    }
}
