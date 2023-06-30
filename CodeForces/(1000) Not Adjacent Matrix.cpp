#include <bits/stdc++.h>
using namespace std;

int main () {

    int t ;

    cin >> t ;

    while (t--) {
        int n ;

        cin >> n ;

        if (n == 2){
            cout << -1 << "\n" ;
            continue ;
        }

        int a[n+5] , start = 1 ;

        for (int i = 0 ; i < n ; i ++) {
            for (int j = 0 ; j < n ; j++){
                if (start > n*n) start = 2 ;
                cout << start << " " ;
                start += 2 ;
            }
            cout << "\n" ;
        }
    }
}
