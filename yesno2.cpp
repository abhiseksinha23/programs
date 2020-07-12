#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	long p;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>p;
		vector<long>arr(n);
		vector<long>a;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(p%arr[i]!=0)a.push_back(arr[i]);
		}
		if(a.size()==0){
			long x =p,d;
			int f = 0;
			vector<long>count(n,0);
			for(int i=n-1; i>=0; i--){
				if(x%arr[i]==0){
					count[i] = (x/arr[i])-1;
					x = arr[i];
				}else{
					f = 1;
					count[i] = x/arr[i];
					count[i]++;
					break;
				}
			}
			if(f==0){
				cout<<"NO\n";
			}else{
				cout<<"YES ";
				for(int i=0; i<n; i++)cout<<count[i]<<" ";
				cout<<"\n";
			}
			continue;
		}
		vector<long>ans(n,0);
		//sort(a.begin(),a.end());
		long d = p/a[a.size()-1];
		long r = p%a[a.size()-1];
		long r1, d1;
		for(int i=0; i<a.size(); i++){
			if(r%a[i]!=0){
				d1 = r/a[i];
				d1++;
				r1 = a[i];
				break;		
			}
		}
		for(int i=0; i<n;i++){
			if(arr[i]==a[a.size()-1]){
				ans[i]=d;
			}
			if(arr[i]==r1){
				ans[i] = d1;
			}
		}
		cout<<"YES ";
		for(int i=0 ;i<n; i++){
			cout<<ans[i]<<" ";
		}cout<<"\n";
	}
	return 0;
}
