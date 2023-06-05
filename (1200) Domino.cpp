#include <bits/stdc++.h>
using namespace std;

int n,a[1000010],b[1000010],s1=0,s2=0;
bool kt=false;

int main (){
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        if(a[i]%2==1&&b[i]%2==0) kt=true;
        if(b[i]%2==1&&a[i]%2==0) kt=true;
        s1+=a[i];
        s2+=b[i];
    }
    if(n==1){
         if(s1%2==0&&s2%2==0) cout<<0;
         else cout<<-1;
         return 0;
    }
    if(s1%2==0&&s2%2==0) cout<<0;
    else{
        if((s1+s2)%2==1) cout<<-1;
        else{
            if(kt) cout<<1;
            else cout<<-1;
        }
    }

}
