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
			long x  = p;
			int f = 0;
			vector<long>c(n,0);
			long d,r;
			for(int i=n-1; i>=0; i--){
				if(x%arr[i]==0){
					d = x/arr[i];
					d--;
					for(int j=0; j<n; j++){
						if(arr[i]%arr[j]!=0){
							f= 1;
							r = arr[i]/arr[j];
							r++;
							c[i] = d;
							c[j] = r;
							break;
						}
					}
					if(f==1)break;
				}
			}
			if(f==1){
				cout<<"YES\n";
				for(int i=0 ;i<n; i++)cout<<c[i]<<" ";
				cout<<"\n";
			}else
			cout<<"NO\n";
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
