#include <bits/stdc++.h>

#define LL				long long
#define LD				long double
#define x				first
#define y 				second
#define print_v(a)		for(vector<int>::iterator it=a.begin();it!=a.end();++it)cout<<*it<<"  ";
#define print(a,n)		for(int f=0;f<n;f++)cout<<a[f]<<"  ";
#define print_p(a,n)	for(int f=0;f<n;f++)cout<<a[f].x<<"  "<<a[f].y<<endl;
#define pf(n)			cout<<n<<"  ";
#define NL				cout<<endl;
#define all(a)			a.begin(),a.end()
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

template <class T1, class T2>
struct sort_pair_second {
    bool operator()(const pair<T1,T2> &left, const pair<T1,T2> &right) {
        if(left.second < right.second)
    		return left.second < right.second;
        else if(left.second == right.second)
        	return left.first < right.first;
        return false;
    }
};

LD sq(LD r){
	return r*r;
}

int main() {
	int T;
	cin >> T;

	while(T--){
		LD u,v,w,U,V,W;
		cin >> u >> v >> w >> W >> V >> U;
		LD u1,v1,w1;
		u=sq(u);
		v=sq(v);
		w=sq(w);
		U=sq(U);
		V=sq(V);
		W=sq(W);
		u1 = sq(v+w-U);
		v1 = sq(w+u-V);
		w1 = sq(u+v-W);
		LD ans = sqrt(4*u*v*w - u*u1 - v*v1 - w*w1 + sqrt(u1*v1*w1))/12;
		cout << fixed;
		cout << setprecision(4);
		cout << ans << endl;
	}
}
