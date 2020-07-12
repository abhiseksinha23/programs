#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
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
//			for(int i=0; i<n; i++){
//			cout<<arr[i]<<" ";
//		}
		vector<pair<int,pair<int,int> > > ans;
		long c=0,nll=0;
		for(int i=0; i<n; i++){
			if(arr[i]!=i+1){
				int sec = -1,f=0,fir =-1;
				for(int j=i+1; j<n; j++){
					//	cout<<arr[j]<<" ";
					if(arr[j]!=j+1 && arr[j]!=i+1 && f==0){
						sec = j;
						f = 1;
					}
					if(arr[j] == i+1){
						fir = j;
						break;
					}
				}
				if(sec==-1){
					nll=1;
				//	cout<<sec<<" ";
					break;
				}
				swap(arr[fir],arr[i]);
				swap(arr[fir],arr[sec]);
				ans.push_back(make_pair(arr[i],make_pair(arr[sec],arr[fir])));
				c++;
				if(c>k){
					nll=1;
					break;
				}
			}
		}
		if(nll==1){
			cout<<"-1\n";
			continue;
		}
		int x=0;
		for(int i=1; i<n; i++){
			if(arr[i]<arr[i-1]){
				x=1;
				break;
			}
		}
		if(x==1){
			cout<<"-1\n";
		}else{
			cout<<c<<"\n";
			for(int i=0; i<ans.size(); i++){
				cout<<ans[i].first<<" ";
				pair<int,int>p = ans[i].second;
				cout<<p.first<<" "<<p.second<<"\n";
			}
		}
	}
	return 0;
}
