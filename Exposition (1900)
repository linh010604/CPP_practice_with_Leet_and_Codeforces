#include <bits/stdc++.h>
#define filenamed "6E"
#define FOR(i, a, b) for(int i = a; i <= b; i++)
using namespace std;

pair<int, int> t[1000010];
int n,k,sl=0,res=INT_MIN,a[100010],vtd[100010];

void build(int a[], int v, int tl, int tr){
    if(tl==tr) t[v].first=t[v].second=a[tl];
    else{
        int tm=(tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v].first=max(t[2*v].first,t[2*v+1].first);
        t[v].second=min(t[2*v].second,t[2*v+1].second);
    }
}

pair< int, int > Get(int v, int vtl, int vtr, int l, int r){
    if(l>r) return {INT_MIN,INT_MAX};

    if(vtl==l&&vtr==r) return t[v];

    int vtm=(vtl+vtr)/2;

    pair<int, int> a=Get(2*v,vtl,vtm,l,min(vtm,r)),b=Get(2*v+1,vtm+1,vtr,max(vtm+1,l),r);

    return {max(a.first,b.first),min(a.second,b.second)};
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
	#ifdef filename
		freopen(filename".inp", "r", stdin);
		freopen(filename".out", "w", stdout);
	#endif // filename

	cin >> n >> k;

	FOR(i,1,n)cin>>a[i];

	build(a,1,1,n);

	FOR(i,1,n){
	    int l=1,r=n-i+1;
	    while(l<=r){
            int mid=(l+r)/2;
            pair <int, int> kq=Get(1,1,n,i,i+mid-1);
            if(kq.first-kq.second<=k) {
                    //cout<<i<<" "<<i+mid-1<<" "<<kq.first<<" "<<kq.second<<"\n";
                l=mid+1;
                if(res==mid){
                    sl++;
                    vtd[sl]=i;
                }
                else{
                    if(res<mid){
                        res=mid;
                        sl=1;
                        vtd[sl]=i;
                    }
                }
            }
            else{
                r=mid-1;
            }
	    }
	}

	cout<<res<<" "<<sl<<"\n";
	for(int i=1;i<=sl;i++) cout<<vtd[i]<<" "<<vtd[i]+res-1<<"\n";

	return 0;
}
