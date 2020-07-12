#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
	cin>>n;
	vector<long>a(n);
	vector<long>b(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	long ans=0;
	for(int i=0 ;i<n; i++){
		ans+= min(a[i],b[i]);
	}
	cout<<ans<<"\n";
	}
	return 0;
}
