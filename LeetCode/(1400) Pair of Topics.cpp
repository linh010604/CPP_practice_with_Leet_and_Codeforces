#include <bits/stdc++.h>
using namespace std;

int n,a[200010],b;
long long res=0;

int main () {
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b;
        a[i]=a[i]-b;
    }
    a[n+1]=INT_MIN;
    sort (a+1, a+1+n);

    for(int i=1;i<=n;i++){
        int x=-a[i];
        int l=i+1,r=n,kq=n+1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]>x){
                r=mid-1;
                kq=mid;
            }
            else {
                l=mid+1;
                kq=mid+1;
            }
        }
        if(a[kq]>x) res+=n-kq+1;
    }
    cout<<res;
}
