#include <bits/stdc++.h>
using namespace std;

int main () {

    int m , n ;
    string res = "YES" , a[101];

    cin >> m >> n ;

    for (int i = 0 ; i < m ; i++)
        cin >> a[i] ;

    for (int i = 0 ; i < m ; i++){
        if(a[i].size()!=n){
            res = "NO" ;
        }
        for(int j = 0 ; j < n ; j++){
            if (i>0 && a[i][j] == a[i-1][j]){
                    res = "NO";
            }
            if (j>0 && a[i][j] != a[i][j-1]){
                    res = "NO";
            }
        }
    }

    cout << res ;

}
