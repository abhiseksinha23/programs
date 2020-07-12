#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long x,y,l,r;
		cin>>x>>y>>l>>r;
		vector<int>x1(62,0),y1(62,0);
		vector<int>l1,r1;
		vector<int>s;
		int k=0;
		long long xx = (x|y);
		if(xx>=l && xx<=r){
			cout<<xx<<"\n";
			continue;
		}
		while(x>0){
			x1[k++] = (x&1);
			x = x>>1;
		}
		while(xx>0){
			 s.push_back(xx&1);
			 if(xx>=l && xx<=r){
			 	cout<<xx<<"\n";
			 	break;
			 }
			xx = xx>>1;
		}
		long long ans=0,p=1,answer;
		for(int i=0; i<xx.size(); i++){
			ans += (xx[i]*p);
			p = p*2;
			if(ans>=l && ans<=r){
				
			}
		}
		int k=0;
		while(y>0){
			y1[k++] = (y&1);
			y = y>>1;
		}
		long long a = l,b=r;
		while(a>0){
			l1.push_back(a&1);
			a= a>>1;
		}
		while(b>0){
			r1.push_back(b&1);
			b= b>>1;
		}
		int m1 = min(l1.size(),r1.size()),m2 =max(l1.size(),r1.size());
		
	}
	return 0;
}
