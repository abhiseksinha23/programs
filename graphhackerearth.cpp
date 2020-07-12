/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " <<0 name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

// long exec(vector<vector<pair<int,long>>>&m, int s, long x, vector<long>&ways){
//     if(ways[s]!=INT_MIN)return ways[s];
//     if(m[s].size()==0)return 0;
//     long count=0;
//     for(int i=0; i<m[s].size();i++){
//         if(m[s][i].second<=x){
//             count++;
//             if(ways[m[s][i].first]==INT_MIN){
// 				count+=exec(m,m[s][i].first,x,ways);
// 			}else{
// 			    count+= ways[m[s][i].first];
// 			}
//         }
//     }
//     return count;
// }
int main(){
	int n,q;
	cin>>n;
	vector<vector<pair<int,long>>>m(n);
	int u,v;
	long w,x;
	for(int i=0; i<n-1; i++){
		cin>>u>>v>>w;
		m[u-1].push_back(make_pair(v-1,w));
//  		m[v-1].push_back(make_pair(u-1,w));
	}
// 	vector<long>ways(n,INT_MIN);
	set<pair<int,int>>s;
	set<int>reachable;
	cin>>q;
	while(q--){
		cin>>x;
		for(int i=n-1; i>=0; i--){
		  //  long total=0;
				if(m[i].size()>0){
			         bool tr = true;   
				    for(int j=0; j<m[i].size(); j++){
				        if(m[i][j].second<=x){
				            // if(tr){
				            //     reachable.insert(i);
				            //     tr!=tr;
				            // }
				            // s.insert(i,m[i][j].fi)
				            // reachable.insert(m[i][j].first);
				            // total++;
				            if(i<m[i][j].first){
				                s.insert(make_pair(m[i][j].first,i));
				            }else{
				                s.insert(make_pair(i,m[i][j].first));
				            }
				        //     if(ways[m[i][j].first]==INT_MIN){
				        //         total+=exec(m,m[i][j].first,x,ways);
				        //     }else{
				        //         total+= ways[m[i][j].first];
				        //     }
				        }
				    }
				 }
				// ways[i]=total;
		}
		  //  for(int x=0; x<reachable.size()-1;x++){
				//         for(int y=x+1; y<reachable.size();y++){
				//           if(reachable[x]<reachable[y]){
				//                 s.insert(make_pair(reachable[y],reachable[x]));
				//             }else{
				//                 s.insert(make_pair(reachable[x],reachable[y]));
				//             } 
				//         }
				//     }
// 		long ans=0;
// 		for(int i=0; i<n; i++){
// 		    ans+=ways[i];
// 		   // cout<<ways[i]<<" ";
// 		}
		cout<<s.size()<<"\n";
	}
	return 0;
}


