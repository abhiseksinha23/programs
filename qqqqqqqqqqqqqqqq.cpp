#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		int m = INT_MIN;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			m = max(arr[i],m);
		}
//		if(n%2!=0){
//			cout<<"-1\n";
//			continue;
//		}
		int ans=-1;
		for(int j=1; j<=m; j++){
			set<int>s;
			for(int i=0; i<n; i++){
				s.insert(arr[i]);
			}
			int f =0;
			for(int i=0; i<n; i++){
				int x = arr[i]^j;
				if(s.find(x)==s.end()){
					f =1;
					break;
				}
				s.erase(x);
			}
			if(f==0){
				ans = j;
				break;
			}
		}
		cout<<ans<<"\n";
	}
	
	
	return 0;
}
