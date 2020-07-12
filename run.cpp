#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,q;
	cin>>n>>m;
	vector<string>s(n);
	vector<string>t(m);
	for(int i=0; i<n;i++)
	 cin>>s[i];
	for(int i=0; i<m;i++)
	 cin>>t[i];
	cin>>q;
	long y;
	while(q--){
		cin>>y;
		int x = y%n;
		int z = y%m;
		if(x==0){
			cout<<s[n-1];
		}else{
			cout<<s[x-1];	
		}
		if(z==0){
			cout<<t[m-1];
		}else{
			cout<<t[z-1];	
		}
		cout<<"\n";
	} 
	return 0;
}
