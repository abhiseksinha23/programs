#include<bits/stdc++.h>
using namespace std;

string ways(int x, int y, int n, vector< vector<int> >&mat, int &c){
	if(x<0 || y<0 ||x>=n || y>=n){
		string s="";
		return	s;
	}
	int count1=0,count2=0;
	if(mat[x][y]==1){
		count1++;
		count2++;
	}
	string s1,s2;
	s1.push_back('u');
	s2.push_back('r');
	s1.insert(1,ways(x+1,y,n,mat,count1));
	s2.insert(1,ways(x,y+1,n,mat,count2));
	c = max(count1, count2);
	return min(s1,s2);
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector< vector<int> >mat(n,vector<int>(n,0));
		int x,y;
		for(int i=0; i<n; i++){
			cin>>x>>y;
			mat[x-1][y-1]=1;
		}
		int c=0;
		string s = ways(0,0,n,mat,c);
		if(c==n){
			cout<<"YES\n";
			for(int i=0; i<s.length(); i++)
			 cout<<s[i];
			cout<<"\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
