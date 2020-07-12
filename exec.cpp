#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long n,m,x;
		cin>>n>>x>>m;
		long currs=x,curre=x;
		long l,r;
		for(int i=0; i<m; i++){
			cin>>l>>r;
			if((currs>=l && currs<=r) ||(curre>=l && curre<=r)){
				currs = min(currs,l);
				curre = max(curre,r);
			}
		}
		long ans = curre-currs+1;
		cout<<ans<<"\n";
	}
	return 0;
}
