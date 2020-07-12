#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long a,c,b,r;
		cin>>a>>b>>c>>r;
		long total = 0;
		long s = c-r;
		long e= c+r;
		if(b>a){
			if( (s<a && e<a) || (s>b && e>b)){
			total = abs(b-a);
			cout<<total<<"\n";
			continue;
		}
			if(s>=a && e<=b){
				total = abs(b-a)- (2*r);
			}
			else if(s>=a && e>b){
				total = abs(a-b)-(b-s);
			}
			else if(s<a && e<=b){
				total = abs(a-b)-(e-a);
			}
			cout<<total<<"\n";
		}else{
			if( (s>a && e>a) || (s<b && e<b)){
			total = abs(b-a);
			cout<<total<<"\n";
			continue;
		}
		if(s>=b && e<=a){
				total = abs(b-a)-(2*r);
			}
			else if(s>=b && e>a){
				total = abs(a-b)-(a-s);
			}
			else if(s<b && e<=a){
				total = abs(a-b)-(e-b);
			}
			cout<<total<<"\n";
		}
	}
	return 0;
}
