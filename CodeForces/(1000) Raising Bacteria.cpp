#include <Bits/stdc++.h>
using namespace std;

int main() {

    int n , res = 0 , bacteria = 0;
    cin >> n ;

    while (bacteria < n) {
        res += 1 ;
        int tmp = 0 ;
        while (bacteria + pow(2,tmp+1) <= n){
            tmp ++ ;
        }
        bacteria += pow(2,tmp) ;
    }
    cout << res ;
}
