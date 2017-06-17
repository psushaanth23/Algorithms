
#include <bits/stdc++.h>

#define LL              long long
#define LD              long double
#define NL              cout<<endl;
#define pf(n)           cout<<n<<"  ";
#define pn(n)           pf(n)NL
#define xx              first
#define yy              second
#define FOR(i,n)        for(int (i)=0;(i)<(n);++(i))
#define print(a,n)      FOR(F,n)pf(a[F]);NL;
#define print2(a,n)     FOR(F,n){FOR(G,n)pf(a[F][G]);NL}
#define all(a)          a.begin(),a.end()
#define pb(n)           push_back(n)        
#define eb(n)           emplace_back(n)
#define mp(a,b)         make_pair(a,b)
#define stl(z)          for(auto const F: z){pn(F)}             //F is read only
#define stl2(z)         for(auto const F: z){pf(F.xx)pn(F.yy)}
#define MOD             1000000007
#define N               100005
#define M               1000006
#define chk             pn(debug++)
#define EXEC 

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

int main() {
	int T;
	cin >> T;

	while(T--){
		
	}
}
