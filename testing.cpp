#include<bits/stdc++.h>
using namespace std;

int main(){
	long t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		x = 2*n;
		vector<long>arr(x);
		vector<long>ans(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		if(arr[x-1]!=arr[x-2]){
			cout<<"0\n";
			continue;
		}
		long a = pow(2,n-1)%1000000007;
		cout<<a<<"\n";
	}
	return 0;
}
