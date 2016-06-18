#include <bits/stdc++.h>

#define LL				    long long
#define LD				    long double
#define x				      first
#define y 				    second
#define print_v(a)		for(vector<int>::iterator it=a.begin();it!=a.end();++it)cout<<*it<<"  ";
#define print(a,n)		for(int f=0;f<n;f++)cout<<a[f]<<"  ";
#define print_p(a,n)	for(int f=0;f<n;f++)cout<<a[f].x<<"  "<<a[f].y<<endl;
#define pf(n)			    cout<<n<<"  ";
#define NL				    cout<<endl;
#define all(a)			  a.begin(),a.end()
#define s(n)			    scanf("%d",&n);
#define sll(n)			  scanf("%lld",&n);
#define sld(n)			  scanf("%lf",&n);
#define ss(n)			    scanf("%s",n);
#define pb(n)			    push_back(n);
#define mp(a,b)			  make_pair(a,b);
#define MOD				    1000000007
#define N				      100005
#define M 				    1000006

using namespace std;

template <class T1, class T2>
struct sort_pair_second {
    bool operator()(const pair<T1,T2> &left, const pair<T1,T2> &right) {
        return left.second < right.second;
    }
};

template <class T3,class T4>
struct sort_pair_first{
	bool operator()(const pair<T3,T4>&left, const pair<T3,T4>&right){
		return left.first > right.first ;
	}
};

vector<pair<int,char> > freq(4);
char a[M],b[M];

int main() {
	int n;
	cin >> n;
	cin >> a;

	for(int i=0;i<n;i++){
		int check[]={0,0,0,0};
		check[a[2*i]-'A']++;
		check[a[2*i+1]-'A']++;
		int flag=0;

		for(int j=0;j<4;j++){
			if(flag==0){
				if(check[j]==0){
					b[2*i]=j+'A';
					flag=1;
				}
			}else{
				if(check[j]==0){
					b[2*i+1]=j+'A';
				}
			}
		}
	}

	for(int i=1;i<n;i++){
		if(b[2*i]==b[2*i-1]){
			swap(b[2*i],b[2*i+1]);
		}
	}

	for(int i=0;i<2*n;i++){
		cout<<b[i];
	}

}
