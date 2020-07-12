#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		if(n==1){
			cout<<"0\n";
			continue;
		}
		vector<int>arr(n,0);
		for(int i=0; i<n; i++){
			arr[i] += arr[i-1]; 
			if(s[i]=='1'){
				arr[i]++;
			}
		}
		long ans= INT_MAX;
		for(int i=0; i<k; i++){
			int curr = arr[i],total=0;
			if(s[i]=='0')total=1;
			for(int j=i; j<n; j+=k){
				if(s[j]=='1'){
					total += (arr[j]-curr-1);
				}else{
					total = (arr[j]-curr+1);
				}
				curr = arr[j];
			}
			if(total<ans){
				ans = total;
			}
			///	ans = min(total,ans);
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
