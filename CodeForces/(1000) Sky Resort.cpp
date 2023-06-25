#include <bits/stdc++.h>
using namespace std ;

int main () {

    int t ;

    cin >> t ;

    while (t--) {
        long long n , k , q , a[200100] ,start = 0 , res = 0;

        cin >> n >> k >> q ;

        for (int i = 1 ; i <= n ; i++){
            cin >> a[i] ;
            if (a[i] > q){
                if(i - 1 -start > k) {
                    for(int j = k ; j <= i - 1 - start ; j++){
                        res += i - 1 - start - j + 1 ;
                    }
                }
                else if(i-start -1 == k) {
                    res += 1 ;
                }
                start = i ;
            }
        }
        //cout << k << " " << n - start << "\n" ;
        if(n-start > k) {
            for(int j = k ; j <= n - start ; j++){
                //cout << res << " " ;
                res += n - start - j + 1 ;
            }
        }
        else if(n-start == k) {
            res += 1 ;
        }

        cout << res << "\n" ;
    }
}
