#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,t,a[4],d[3],kq;

main () {
    cin>>n;
    cin>>a[1]>>a[2]>>a[3];
    d[a[1]%2]++;
    d[a[2]%2]++;
    d[a[3]%2]++;
    if(d[1]>d[0]) kq=0;
    else kq=1;

    for(int i=1;i<=n;i++){
        if(i<=3) {
            if(a[i]%2==kq) {cout<<i;return 0;}
        }
        else{
            cin>>a[1];
            if(a[1]%2==kq) {cout<<i;return 0;}
        }
    }
}
