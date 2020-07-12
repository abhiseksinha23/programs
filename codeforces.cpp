#include<bits/stdc++.h>
using namespace std;
bool comp(long x, long y){
	return x>y;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long x;
		cin>>n>>x;
		vector<int>arr(n);
		long long left=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]>x){
				left += (arr[i]-x);
				arr[i] =  x;
			}
		}
		sort(arr.begin(),arr.end(),comp);
		int ans=0;
		for(int i=0; i<n; i++){
			if(arr[i]==x){
				ans++;
			}
			else if(arr[i]!=x && arr[i]+left>=x){
				left -= (x-arr[i]);
				arr[i] =x;
				ans++;
			}else if(arr[i]+left<x){
				break;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
