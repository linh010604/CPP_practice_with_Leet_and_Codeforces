#include <bits/stdc++.h>
#define filenam "MAZE"
#define FOR(i, a, b) for(int i = a; i <= b; i++)
using namespace std;

int m,n,kc,d=2,vt=0,k;
char a[600][600];
int const H[]={-1,0,1,0};
int const C[]={0,1,0,-1};
pair <int, int> x,b[270010];
queue <pair <int, int> > q;
bool ok[600][600];

int BFS (int i, int j){
    q.push({i,j});
    while(!q.empty()){
         x=q.front();
         vt++;
         b[vt]={x.first,x.second};
         q.pop();
         for(int i=0;i<=3;i++)
            if(ok[x.first+H[i]][x.second+C[i]]&&a[x.first+H[i]][x.second+C[i]]=='.'){
                ok[x.first+H[i]][x.second+C[i]]=false;
                q.push({x.first+H[i],x.second+C[i]});
            }
    }
    for(int e=vt;e>=vt-k+1;e--)
        a[b[e].first][b[e].second]='X';
 
    for(int e=1;e<=n;e++){
        for(int ee=1;ee<=m;ee++){
            cout<<a[e][ee];
        }
        cout<<"\n";
    }
    exit(0);
}

int main()
{
	#ifdef filename
		freopen(filename".inp", "r", stdin);
		freopen(filename".out", "w", stdout);
	#endif // filename

	cin>>n>>m>>k;

  for(int i=1;i<=n;i++)
       for(int j=1; j<=m;j++ ){
          cin>> a[i][j];
          ok[i][j]=true;
       }

   for(int i=1;i<=n;i++)
       for(int j=1; j<=m;j++ )
          if(ok[i][j]&&a[i][j]=='.'){
             ok[i][j]=false;
             BFS(i, j);
          }
   
}
