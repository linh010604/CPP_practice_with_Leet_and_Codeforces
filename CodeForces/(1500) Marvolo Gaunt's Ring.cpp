#include <bits/stdc++.h>
#define MAX 100010
#define int long long
using namespace std;

int n,a[MAX],p,q,r,amin1[MAX],amin2[MAX],amax1[MAX],amax2[MAX];
long long x=LLONG_MIN,aa,b,c;

 main (){

    cin>>n>>p>>q>>r;

    amin1[0]=LLONG_MAX;
    amax1[0]=LLONG_MIN;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        amin1[i]=min(amin1[i-1],a[i]);
        amax1[i]=max(amax1[i-1],a[i]);
    }


    amin2[n+1]=LLONG_MAX;
    amax2[n+1]=LLONG_MIN;

    for(int i=n;i>=1;i--){
        amin2[i]=min(amin2[i+1],a[i]);
        amax2[i]=max(amax2[i+1],a[i]);
    }

    for(int i=1;i<=n;i++){
        aa=q*a[i];
        if(p<0) b=p*amin1[i];
        else b=p*amax1[i];
        if(r<0) c=r*amin2[i];
        else c=r*amax2[i];
        x=max(x,aa+b+c);
    }

    cout<<x;

}
