#include <bits/stdc++.h>
using namespace std ;

int main () {
    int q ;
    cin >> q ;

    while (q--) {
        long long n, k;

        cin >> n >> k ;

        if (n%2 == 0 || n%k == 0) cout << "YES" << "\n" ;
        else {
            if (n%k%2 ==0 || (n%k+k)%2 ==0 )cout << "YES" << "\n" ;
            else cout << "NO" << "\n" ;
        }
    }
}
