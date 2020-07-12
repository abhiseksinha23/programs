/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " <<0 name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
//void dfs(vector<vector<pair<int,long>>>&m, vector<bool>&vis, long x, long &count, int s, int p){
//	if(vis[p])return;
//	
//	vis[p]=true;
//	for(int i=0; i<m[p].size();i++){
//		if(m[p][i].second<=x){
//			if(m[p][i].first>s)
//			count++;
//			dfs(m,vis,x,count,s,m[p][i].first);
//		}
//	}
//}
long fac(int x){
	long f=1;
	for(int i=2; i<x;i++)
	 f =f*i;
	return f;	
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
	}
	cin>>q;
	while(q--){
		cin>>x;
		long total=0;
		queue<int>q;
		vector<bool>vis(n,false);
		for(int i=0; i<n; i++){
			if(!vis[i]){
				vis[i]=true;
				q.push(i);
				int l=0;
				while(q.empty()){
					int x = q.pop();
					int t=0;
					l++;
					for(int i=0; i<m[x].size();i++){
					if(m[x][i].second<=x && !vis[m[x][i]]){
						vis[m[x][i]]= true;
						q.push(m[x][i].first);
						total+=l;
						t++;
						}
					}
					if(t>1){
					total+=fac(t);
					}
				}
			}
		}
		cout<<total<<"\n";
	}
	return 0;
}


