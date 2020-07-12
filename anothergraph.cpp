/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " <<0 name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

 long exec(vector<vector<pair<int,long>>>&m, int s, long x, vector<long>&ways){
     if(ways[s]!=INT_MIN)return ways[s];
     if(m[s].size()==0)return 0;
     long count=0;
     for(int i=0; i<m[s].size();i++){
         if(m[s][i].second<=x){
             count++;
             if(ways[m[s][i].first]==INT_MIN){
 				count+=exec(m,m[s][i].first,x,ways);
 			}else{
 			    count+= ways[m[s][i].first];
 			}
         }
     }
     return count;
 }
int main(){
	int n,q;
	cin>>n;
	vector<vector<pair<int,long>>>m(n);
	vector<vector<long>>m1(n,vector<long>(n,INT_MAX));
	vector<vector<int>>r(n);
	int u,v;
	long w,x;
	for(int i=0; i<n-1; i++){
		cin>>u>>v>>w;
		m[min(u,v)-1].push_back(make_pair(max(v,u)-1,w));
		m1[min(u,v)-1][max(u,v)-1]=w;
		r[min(u,v)-1].push_back(max(v,u)-1);
//  		m[v-1].push_back(make_pair(u-1,w));
	}
	for(int i=0; i<n-1; i++){
		for(int j=0;j<r[i].size()-1;j++){
			for(int k=j+1; j<r[i].size();k++){
				if(m1[r[i][j]][r[i][k]]==INT_MAX){
					m1[r[i][j]][r[i][k]]=max(m1[i][r[i][j]],m1[i][r[i][k]]);
					m[r[i][j]].push_back(make_pair(r[i][k],m1[r[i][j]][r[i][k]]));
				}
			}
		}
	}
 	vector<long>ways(n,INT_MIN);
	cin>>q;
	while(q--){
		cin>>x;
		for(int i=n-1; i>=0; i--){
		    long total=0;
				if(m[i].size()>0){
			         bool tr = true;   
				    for(int j=0; j<m[i].size(); j++){
				        if(m[i][j].second<=x){
				            total++;
				             if(ways[m[i][j].first]==INT_MIN){
				                 total+=exec(m,m[i][j].first,x,ways);
				             }else{
				                 total+= ways[m[i][j].first];
				             }
				        }
				    }
				 }
				 ways[i]=total;
		}
 		long ans=0;
 		for(int i=0; i<n; i++){
 		    ans+=ways[i];
 		   // cout<<ways[i]<<" ";
 		}
		cout<<s.size()<<"\n";
	}
	return 0;
}


