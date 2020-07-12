#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n;
	long g[n][n] = {INT_MAX};
	int u,v;
	long w;
	for(int i=0; i<n; i++){
		cin>>u>>v>>w;
		g[min(v-1,u-1)][max(v-1,u-1)]=w;
	}
	cin>>q;
	while(q--){
		cin>>x;
		bool p[n][n] ={false};
	for(int i=0; i<n; i++){
		vector<int>r;
		for(int j=i+1; j<n;j++){
			if(g[i][j]<=x && p[i][j]!=true){
				r.push_back(j);
				p[i][j]= true;	
			}
		}
		for(int j=0; j<r.size()-1;j++){
			for(int k=j+1; j<r.size();k++){
				if(!p[j][k]){
					long c = min(max(g[i][j],g[i][k]),g[j][k]);
					if(c<=x){
						p[j][k]=true;
					}
				}
			}
		}
	}
	long count=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(p[i][j])count++;
		}
	}
	cout<<count<<"\n";
	}
	return 0;
}

