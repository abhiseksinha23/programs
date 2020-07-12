#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int h,m;
		cin>>h>>m;
		if(h==0 && m==0){
			cout<<"0\n";
			continue;
		}
		int hl = 23-h;
		int ml = 60-m;
		cout<<hl*60 + ml<<"\n";
	}
	return 0;
}
