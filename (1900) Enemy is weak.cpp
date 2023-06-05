#include <bits/stdc++.h>
#define filenamed "WEAKENE"
#define FOR(i, a, b) for(int i = a; i <= b; i++)
using namespace std;

long long n,k,val[1000010],a[1000010],res=0,vt,lh[1000010];
int BIT[10000100],BITT[10000010];
pair<long long,int> b[1000100];

void update (int kl,int vl) {
    while(kl>=1){
        BIT[kl]+=vl;
        kl-=(kl&(-kl));
    }
}

void updatee (int kl,int vl) {
    while(kl<=10000010){
        BITT[kl]+=vl;
        kl+=(kl&(-kl));
    }
}

int sum(long long x){
    long long ans=0;
    while(x<=10000010){
        ans=ans+BIT[x];
        x+=(x&(-x));
    }
    return ans;
}

int summ(long long x){
    long long ans=0;
    while(x>=1){
        ans=ans+BITT[x];
        x-=(x&(-x));
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

	#ifdef filename
		freopen(filename".inp", "r", stdin);
		freopen(filename".out", "w", stdout);
	#endif // filename

	cin>>n;

	FOR(i,1,n){
	    cin>>a[i];
	    b[i].first=a[i];b[i].second=i;
	}

    sort(b+1,b+1+n);

    vt=1;
    a[b[1].second]=1;
    for(int i=2;i<=n;i++){
        if(b[i].first==b[i-1].first) a[b[i].second]=vt;
        else{
            vt++;
            a[b[i].second]=vt;
        }
    }

    FOR(i,1,n){
	    update(a[i]-1,1);
	    lh[i]=sum(a[i]);
	}

	for(int i=n;i>=1;i--){
	    updatee(a[i]+1,1);
	    val[i]=summ(a[i]);
	}

	FOR(i,1,n){
	    res+=lh[i]*val[i];
	}

	cout<<res;


	return 0;
}
  
