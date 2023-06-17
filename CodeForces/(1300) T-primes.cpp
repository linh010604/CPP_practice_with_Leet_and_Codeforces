#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e6 + 10;
int res,n,a;
bool pr[MAX];
main () {
    memset(pr,true,sizeof(pr));
    pr[1] = false;
    for(int i=2;i<=1000000;i++) {
        if(pr[i]) {
            for(int j=i*i;j<=1000000;j+=i) pr[j] = false;
        }
    }
    cin >> n;
    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
        int kk = sqrt(x);
        if(kk*kk == x && pr[kk]) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
