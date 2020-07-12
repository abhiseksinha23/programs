#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long k;
		cin>>n>>k;
		vector<int>arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		vector<vector<int> >ans;
		vector<int>a;
		if(n%2!=0){
			long c=0;
			int i=0,j=n-1,x=0;
			int k = n/2;
			while(i<k){
				swap(arr[i],arr[j]);
				c++;
				a.push_back(arr[i]);
				a.push_back(arr[k]);
				a.push_back(arr[j]);
				ans.push_back(a);
				a.resize(0);
				i++;
				j--;
				if(c>k){
					x=1;
					break;
				}
			}
			if(x==1){
				cout<<"-1\n";
			}else{
				cout<<c<<"\n";
				for(int i=0; i<ans.size(); i++){
					for(int j=0; j<ans[i].size(); j++){
						cout<<ans[i][j]<<" ";
					}cout<<"\n";
				}
			}
		}else{
			long c=0;
			int i=0,j=n-1,x=0;
			int k = n/2 - 1;
			while(i<k){
				swap(arr[i],arr[j]);
				c++;
				a.push_back(arr[i]);
				a.push_back(arr[k]);
				a.push_back(arr[j]);
				ans.push_back(a);
				a.resize(0);
				i++;
				j--;
				if(c>k){
					x=1;
					break;
				}
			}
			i--;
			swap(arr[k],arr[k+1]);
			a.push_back(arr[i]);
				a.push_back(arr[k]);
				a.push_back(arr[k+1]);
					ans.push_back(a);
				a.resize(0);
				c++;
			if(x==1){
				cout<<"-1\n";
			}else{
				cout<<c<<"\n";
				for(int i=0; i<ans.size(); i++){
					for(int j=0; j<ans[i].size(); j++){
						cout<<ans[i][j]<<" ";
					}cout<<"\n";
				}
			}
		}
	}
	
	return 0;
}
