#include <bits/stdc++.h>
using namespace std;

int main() {

    int cnt ;
    string s ;
    set <char> d ;

    cin >> cnt >> s ;

    if (cnt < 26) {
        cout << "NO" ;
    }
    else{
        for (int i = 0 ; i < cnt ; i++){
            if (s[i] < 96) s[i] = s[i] + 32 ;
            d.insert(s[i]) ;
        }

        if (d.size() == 26) cout<< "YES";
        else cout << "NO" ;
    }


}
