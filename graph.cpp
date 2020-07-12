#include<bits/stdc++.h>
using namespace std;
#define max 10000
//int arr[][];
long long find(int &u, int &v, int &n, bool arr[max][max], vector<long>c,long long ans, int&f, int pre){
	if(u==v){
		ans*= c[v];
		return ans;
	}
	ans*= c[u];
	for(int i=0; i<n; i++){
		if(i==v && arr[u][i]){
			ans*= c[arr[u][i]];
			f = 1;
			return ans; 
		}
		if(i!=pre && arr[u][i]){
		 	ans = ans*c[arr[u][i]];
		 int	x = u;
		find(i, v, n, arr, c, ans,f,x);
		if(f==1){
			return ans;
		}
		ans/= c[arr[u][i]];   
		}
	}
	return ans;
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n;
		bool arr[max][max] = {false};
	//	bool arr[n][n] =  {false};
		
	//	vector<vector<bool>>arr(n, vector<bool>(n,false));
		int u,v;
		for(int i=0; i<n; i++){
			cin>>u>>v;
			u--;v--;
			arr[u][v] =  true;
			arr[v][u] = true;
		}
 		vector<long>c(n);
      // long c[n];
		for(int i=0; i<n; i++){
			cin>>c[i];
		}
		cin>>q;
		while(q--){
			cin>>u>>v;
			u--;v--;
			 long long ans = 1;
			 int f = 0, pre = -1;
			long long x = find(u,v,n,arr,c,ans, f, pre);
			cout<<x<<"\n";
		}
	}
	return 0;
}
