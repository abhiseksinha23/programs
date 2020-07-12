#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c,d,e,s=2;
		long d1=1,d2=1;
		int n;
		cin>>n;
		cin>>a;
		for(int i=0; i<n; i++){
			s = s*10;
			d1 = d1*10;
		}
		s = s+a;
		cout<<s<<endl;
		fflush(stdout);
		cin>>b;
		c = d1-b;
		cout<<c<<endl;
		fflush(stdout);
		cin>>d;
		e = s-(a+b+c+d);
		cout<<e<<endl;
		fflush(stdout);
		int p;
		cin>>p;
		if(p==-1){
			break;
		}
	}
	return 0;
}
