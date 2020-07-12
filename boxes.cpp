#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		vector<long>arr(n);
		vector<long>marr(n);
		for(long i=0; i<n; i++){
			cin>>arr[i];
		}
		marr[0] = arr[0];
		for(long i=1;i<n; i++){
			marr[i] = min(marr[i-1],arr[i]);
		}
		long long count=0;
		for(long i=0; i<n; i++){
			count+=marr[i];
		}
		cout<<count<<"\n";
	}
	return 0;
}
