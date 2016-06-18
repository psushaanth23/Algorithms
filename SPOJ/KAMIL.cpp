// The challenge of this program is to minimize the space taken on hard disk, so I crammed up everything into one line.
#include<bits/stdc++.h>
using namespace std;int main(){int j=10;while(j--){char s[99];cin>>s;int ans=1;for(int i=0;i<strlen(s);i++){(s[i]=='T'||s[i]=='D'||s[i]=='F'||s[i]=='L')?ans*=2:ans;}cout<<ans<<endl;}}
