#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int mat[n][m];
		vector<int>re;
		vector<int>ce;
		for(int i=0; i<n; i++){
			int f=0;
			for(int j=0; j<m; j++){
				cin>>mat[i][j];
				if(mat[i][j]==1){
					f=1;
				}
			}
			if(f==0)
			re.push_back(i);
		}
		for(int j=0; j<m; j++){
			int f=0;
			for(int i=0; i<n; i++){
				if(mat[i][j]==1){
					f = 1;
					break;
				}
			}
			if(f==0)
			ce.push_back(j);
		}
		bool ashish =true;
		int s1=re.size(),s2=ce.size();
		while(s1>0 && s2>0){
			s1--;
			s2--;
			ashish = !ashish;
		}
		if(ashish){
			cout<<"Vivek\n";
		}else{
			cout<<"Ashish\n";
		}
	}
	return 0;
}
