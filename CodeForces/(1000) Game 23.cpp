#include <bits/stdc++.h>
using namespace std ;

int main () {

        long long n, m;

        cin >> n >> m ;

        if (m%n != 0) cout <<-1 ;
        else{
            n = m/n ;
            int res = 0 ;
            while (n > 0 && n%2 == 0) {
                n = n/2;
                res+= 1 ;
            }
            while (n > 0 && n%3 == 0) {
                n = n/3;
                res += 1;
            }
            if (n == 1) cout << res ;
            else cout << -1 ;
        }
}
