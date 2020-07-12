/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " <<0 name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<pair<int,long>>>&m, vector<bool>&vis, long x, long &count, int s, int p){
	if(vis[p])return;
	
	vis[p]=true;
	for(int i=0; i<m[p].size();i++){
		if(m[p][i].second<=x){
			if(m[p][i].first>s)
			count++;
			dfs(m,vis,x,count,s,m[p][i].first);
		}
	}
}
int main(){
	int n,q;
	cin>>n;
	vector<vector<pair<int,long>>>m(n);
	int u,v;
	long w,x;
	for(int i=0; i<n-1; i++){
		cin>>u>>v>>w;
		m[u-1].push_back(make_pair(v-1,w));
		m[v-1].push_back(make_pair(u-1,w));
	}
	cin>>q;
	while(q--){
		cin>>x;
		long total=0;
		for(int i=0; i<n; i++){
			long count=0;
			vector<bool>vis(n,false);
			dfs(m,vis,x,count,i,i);
			total+=count;
		}
	}
	return 0;
}


