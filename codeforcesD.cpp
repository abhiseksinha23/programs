#include<bits/stdc++.h>
using namespace std;
struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first + 1;
		int lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<pair<int,int>,cmp>s;
		s.insert({0,n-1});
		vector<int>a(n,0);
		for(int i=0; i<n; i++){
			pair<int,int>p = *s.begin();
			s.erase(s.begin());
			int id = (p.first + p.second)/2;
			a[id] = i+1;
			if(p.first<id)s.insert({p.first,id-1});
			if(id<p.second)s.insert({id+1,p.second});
		}
		for(auto i:a){
			cout<<i<<" ";
		}cout<<"\n";
	}
	
	return 0;
}

