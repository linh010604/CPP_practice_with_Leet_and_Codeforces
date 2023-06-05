#include <bits/stdc++.h>
#define filenamed "CHISTREE"
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define int long long
using namespace std;

int n,m,a[200010],x[2000010],t=0,vt=0;
long long kq=0,d[20000010];
map < int , int> s;
deque <pair <long long, int> > q;

void BFS() {
     while(!q.empty()){
        pair <long long, int > c=q.front();
        q.pop_front();
        vt++;
        x[vt]=c.second;
        d[vt]=c.first+1;
        kq=kq+c.first+1;
        if(vt==n+m) return;

        if(s[c.second+1]==0) {
            s[c.second+1]++;
            q.push_back({d[vt],c.second+1});
        }
        if(s[c.second-1]==0) {
            s[c.second-1]++;
            q.push_back({d[vt],c.second-1});
        }

     }
}

 main()
{

    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
	#ifdef filename
		freopen(filename".inp", "r", stdin);
		freopen(filename".out", "w", stdout);
	#endif // filename

	cin>>n>>m;

	for(int i=1;i<=n;i++){
        cin>>a[i];
        s[a[i]]++;
        q.push_back({-1,a[i]});
	}

	BFS();

	cout<<kq<<"\n";

	for(int i=n+1;i<=vt;i++)
    {
        cout<<x[i]<<" ";
    }

}
