#include <bits/stdc++.h>

#define LL				long long
#define LD				long double
#define x				first
#define y 				second
#define NL				cout<<endl;
#define pf(n)			cout<<n<<"  ";
#define FOR(i,n)		for(int (i)=0;(i)<(n);++(i))
#define print(a,n)		FOR(F,n)pf(a[F]);NL;
#define printV(a)		for(vector<int>::iterator it=a.begin();it!=a.end();it++){pf(*it)}NL
#define print2(a,n)		FOR(F,n){FOR(G,n)pf(a[F][G]);NL}
#define printP(a,n)		FOR(F,n){pf(a[F].x)pf(a[F].y);NL};
#define all(a)			a.begin(),a.end()
#define clr(a,n)		FOR(i,n)a[i]=1;
#define test()			int t;s(t);while(t--)
#define s(n)			scanf("%d",&n);
#define sll(n)			scanf("%lld",&n);
#define sld(n)			scanf("%lf",&n);
#define ss(n)			scanf("%s",n);
#define pb(n)			push_back(n)
#define mp(a,b)			make_pair(a,b)
#define MOD				1000000007
#define N				100005
#define M 				1000006

using namespace std;

vector<pair<int,int> > lim;
int m,n,ar[210];
LL cache[210][210];

LL find(int left,int i){
	if(cache[left][i]!=-1)		return cache[left][i];
	if(i==m && left>0)			return 0;
	if(i==m && left==0)			return 1;

	LL ans = 0;
	for(int j=0;j<=lim[i].y-lim[i].x;j++){
		if(left-j>=0){
			ar[i]+=j;
				ans = (ans+find(left-j,i+1))%MOD;
			ar[i]-=j;
		}
	}

	return cache[left][i] = ans%MOD;
}

int main() {
	int t;
	cin >> t;

	while(t--){
		cin >> m >> n;

		for(int i=0;i<205;i++){
			for(int j=0;j<205;j++){
				cache[i][j] = -1;
			}
		}

		int sum=0;
		for(int i=0;i<m;i++){
			int a, b;
			cin >> a >> b;
			lim.pb(mp(a,b));
			ar[i] = a;
			sum += a;
		}

		LL ans = 0;
		if(n-sum>0)
			ans = find(n-sum,0)%MOD;

		cout << ans << endl;
		lim.clear();
	}
}




