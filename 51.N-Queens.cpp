// using backtracking to try all case and add the answer to the vector.
#include <bits/stdc++.h>
using namespace std;

vector<string> col ;
vector<vector<string>> res ;

bool check (vector<string> col , int x , int y) {

    for (int i = 0 ; i < col.size() ; i++) {
        if ( col[i][y] != '.' || col[x][i] != '.' ) return false ;
    }

    int x1 = x ;
    int y1 = y ;

    while (x1 < col.size() && y1 < col.size()) {
        if (col[x1][y1] != '.') return false ;
        x1 ++ ;
        y1 ++ ;
    }

    x1 = x ;
    y1 = y ;

    while (x1 > -1 && y1 > -1) {
        if (col[x1][y1] != '.') return false ;
        x1 -- ;
        y1 -- ;
    }

    x1 = x ;
    y1 = y ;

    while ( -1 < x1 && y1 < col.size()) {
        if (col[x1][y1] != '.') return false ;
        x1 -- ;
        y1 ++ ;
    }

    x1 = x ;
    y1 = y ;

    while ( x1 < col.size() && -1 < y1) {
        if (col[x1][y1] != '.') return false ;
        x1 ++ ;
        y1 -- ;
    }

    return true ;
}
vector<vector<string>> solve (vector<vector<string>> res , vector<string> col , int x) {
    if (x == col.size() ){
        res.push_back(col) ;
        return res ;
    }
    else {
        for (int y = 0 ; y < col.size() ; y++){
            if (check(col , x , y)) {
                col[x][y] = 'Q';
                res = solve(res , col , x + 1) ;
                col[x][y] = '.' ;
            }
        }
    }

    return res ;
}

int main () {
    int n ;

    cin >> n ;

    for (int i = 0 ; i < n ; i++) {
        col.push_back( "" ) ;
        for (int j = 0 ; j < n ; j++)
            col[i] += '.';
    }

    res = solve(res, col, 0) ;
    
    return res ;

}
