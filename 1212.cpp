#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int ans= INT_MAX;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				ans = min(ans, abs(arr[i]-arr[j]));
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

