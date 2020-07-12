#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<long>arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		long count=0;
		sort(arr.begin(),arr.end());
		for(int i=n-1; i>=0; i--){
			if(arr[i]%k!=0){
				count+= (arr[i]%k);
				arr[i] -= (arr[i]%k);
			}
		}
		long ans = count%k;
		cout<<ans<<"\n";
	}
	return 0;
}
