#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector< pair<int,int> >arr(n);
		int x,y;
		for(int i=0; i<n;i++){
			cin>>x>>y;
			arr[i]=make_pair(x,y);
		}
		string ans;
		sort(arr.begin(),arr.end());
		int currx=0,curry=0,f=0;
		for(int i=0; i<n; i++){
			 x = arr[i].first-currx;
			 y = arr[i].second-curry;
			 if(x<0 || y<0){
			 	f = 1;
			 	break;
			 }
			if(x>0){
			 	for(int j=0; j<x;j++)
			 	ans.push_back('R');
			 }
			if(y>0){
			 	for(int j=0; j<y;j++)
			 	ans.push_back('U');
			 }
			 currx = arr[i].first;
			 curry = arr[i].second;
		}
		if(f==1){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
			for(int i=0; i<ans.length(); i++)
			 cout<<ans[i];
			cout<<"\n";
		}
	}
	return 0;
}
