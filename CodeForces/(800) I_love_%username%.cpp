#include <bits/stdc++.h>
using namespace std ;

int main () {
    int n ;
    cin >> n ;
    int a ;
    cin >> a ;
    int mina = a , maxa = a , res = 0 ;

    for (int i = 1 ; i < n ; i++) {
        cin >> a;
        if (a<mina) {
            res += 1 ;
            mina = a ;
        }
        else if (a>maxa) {
            res += 1 ;
            maxa = a ;
        }
    }
    cout <<res ;
}
