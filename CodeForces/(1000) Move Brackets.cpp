#include <bits/stdc++.h>
using namespace std;

int main (){
    int t ;
    cin >>t ;

    while (t--) {
        stack <char> d ;
        string s ;
        int  n;

        cin >> n >> s;

        for (int i = 0 ; i <s.length() ; i++){
            if (s[i] == ')' && (d.empty() || d.top() == ')')) d.push(s[i]);
            else if (s[i] == ')') d.pop();
            else d.push(s[i]) ;
        }

        cout <<d.size()/2 << "\n";

    }
}
