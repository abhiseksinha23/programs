#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>arr(n);
		vector<pair<int,int> >p(m);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int x,y;
		for(int i=0; i<m; i++){
			cin>>x>>y;
			x--;y--;
			p[i] = make_pair(x,y);
		}
		long ans =INT_MAX;
		long  count=0;
		 for (int i = 0; i < n-1; i++)  
        {  
        	if(arr2[i]!=i+1){
        	int min_idx = i;  
        	for (int j = i+1; j < n; j++)  
        	if (arr2[j] < arr2[min_idx])  
            	min_idx = j;  
        	swap(arr2[min_idx], arr2[i]);
        	int f=0;
        	for(int j=0; j<m; j++){
            	if((p2[i].first==min_idx && p2[i].second==i) ||(p2[i].first==i && p2[i].second==min_idx) ){
                	f = 1;
                	break;
            	}
        	}
        	if(f==0){
            	count++;
        	}
        	}
    	}  	
		ans = min(ans,count);
		
		for(int l=0; l<m;l++){
			for
		}
		
		
		ans=0;
		sort(arr.begin(),arr.end(),comp);
		cout<<ans<<"\n";
	}
	return 0;
}
