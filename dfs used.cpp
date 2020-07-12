#include<bits/stdc++.h>
using namespace std;
#define max 1000

long long dfs(bool arr[max][max], int u, int v, int n, vector<long>&c, vector<bool>&vis, long long ans, int&f){
	if(u==v){
		ans *= c[u];
		return ans;
	}
	if(!vis[u]){
	    vis[u] = true;
	    ans *= c[u];
	    for(int i=0; i<n; i++){
		if(arr[u][i] && !vis[i]){
			if(i==v){
				ans *= c[v];
				f = 1;
				return ans;
			}else{
				long long xx = dfs(arr,i,v,n,c,vis,ans,f);
				if(f==1){
					return xx;
				}
			}
		}
	}
	ans /= c[u]; 
	}
	return ans;
}

long long count(long long n) 
{ 
    long long cnt = 0; 
    long long mod = 1e9+7;
    for (long long i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt = (cnt+1)%mod; 
  
            else // Otherwise count both 
                cnt = (cnt + 2)%mod; 
        } 
    } 
    return cnt%mod; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n;
		bool arr[max][max] = {false};
		int u,v;
		for(int i=0; i<n-1; i++){
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
		long long mod = 1e9+7;
		cin>>q;
		while(q--){
			cin>>u>>v;
			u--;v--;
			 long long ans = 1;
			 int f = 0;
			 vector<bool>vis(n,false);
			 long long x = dfs(arr,u,v,n,c,vis,ans,f);
		//	long long x = find(u,v,n,arr,c,ans, f, pre);
		//	cout<<x<<"\n";
// 			long long c=0;
// 			for(long long i=1; i<=(x/2); i++){
// 			    if(x%i==0){
// 			        c = (c+1)%mod;
// 			    }
// 			}
// 			c = (c+1)%mod;
            cout<<count(x)%mod<<"\n";
		//	cout<<c%mod<<"\n";
		}
	}
	return 0;
}
