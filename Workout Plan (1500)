#include <bits/stdc++.h>
#define filenamed "1218F"
#define FOR(i, a, b) for(int i = a; i <= b; i++)
using namespace std;

int n,K,A,X[100010],C[100010],Xmax=INT_MIN;
long long kq=0;
priority_queue <int> q;

int main() {

   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

	#ifdef filename
		freopen(filename".inp", "r", stdin);
		freopen(filename".out", "w", stdout);
	#endif // filename

	cin>>n>>K;

	for(int i=1;i<=n;i++){
        cin>>X[i];
        Xmax=max(Xmax,X[i]);
	}

	cin>>A;

	for(int i=1;i<=n;i++){
        cin>>C[i];
	}

	for(int i=1;i<=n;i++){
        q.push(-C[i]);
        if(K<X[i]){
            while(!q.empty()&&K<X[i]){
                K+=A;
                //cout<<-q.top()<<" ";
                kq+=(-q.top());
                q.pop();
            }
            if(K<X[i]) {
                cout<<-1;
                return 0;
            }
        }
        if(X[i]==Xmax) break;
	}

	cout<<kq;

	return 0;
}
