#include <bits/stdc++.h>
using namespace std ;

int main () {

    int t ;

    cin >> t;

    while(t--) {
        int n ;
        cin >> n ;

        int a[n+2] , res[n+2];

        a[n-1] = 200000;

        for (int i = 1 ; i <= n - 1 ; i++){
            cin >> a[i] ;
        }

        int idx = 0 ;

        if (a[1] < a[2]){
            a[0] = res[0] = 0 ;
            for (int i = 1 ; i < n ; i++){
                if (a[i] < a[i-1]) {
                    res[i-1] = res[i] = a[i] ;
                }
                else{
                    res[i] = a[i] ;
                }
            }
            for (int i = 0 ; i < n ; i++){
                cout << res[i] <<" " ;
            }
            cout << "\n" ;
            continue ;
        }

        res[n-1] = 0 ;
        bool ok = true ;

        for (int i = 1 ; i <= n - 1 ; i++){
            if (a[i] < a[i + 1] && ok){
                res[idx] = 0 ;
                idx++ ;
                ok = false ;
            }
            else if (ok == false && a[i] < a[i - 1] ){
                res[idx-1] = res[idx] = a[i] ;
                idx ++ ;
                continue;
            }
            res[idx] = a[i] ;

            idx ++ ;

        }
        for (int i = 0 ; i <= n - 1 ; i++){
            cout << res[i] << " " ;
        }

        cout << "\n" ;

    }
}
