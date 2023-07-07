#include <bits/stdc++.h>
using namespace std ;

int main () {

    int q ;

    cin >> q ;

    while (q--) {
        int n, t, a[55] , b , res = -1 , ress = -2;

        cin >> n >> t ;

        for (int i = 0 ; i < n ; i++)
            cin >> a[i] ;

        for (int i = 0 ; i < n ; i++){
            cin >> b ;

            if (a[i] + i <= t) {
                res = max(res , b ) ;

                if (b == res) ress = i ;
            }

        }

        cout << ress + 1 << "\n" ;

    }
}
