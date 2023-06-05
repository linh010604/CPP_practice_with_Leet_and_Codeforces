#include <bits/stdc++.h>
using namespace std;

int main () {
    int t , b[100010] , c[100010];
    pair <int , int> a[100010] ;
    cin >> t;

    while (t--) {
        int n , k ;

        cin >> n >> k ;

        for (int i = 1 ; i <= n ; i++){
            cin >> a[i].first ;
            a[i].second = i ;
        }

        for (int i = 1 ; i <= n ; i++) {
            cin >> b[i] ;
        }

        sort(b + 1 , b + 1 + n ) ;
        sort(a + 1 , a + 1 + n ) ;

        for (int i = 1 ; i <= n ; i++) {
            c[a[i].second] = b[i] ;
        }

        for (int i = 1 ; i <= n ; i++) {
            cout << c[i] << " " ;
        }

        cout << "\n" ;

    }
}
