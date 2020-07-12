#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,n;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		long long m = max(a,b);
		m = max(m,c);
		long long f1 = m-a,f2=m-b,f3=m-c;
		n = n-f1-f2-f3;
		if(n==0){
			cout<<"YES\n";
		}else if(n<0){
			cout<<"NO\n";
		}else{
			if(n%3==0){
				cout<<"YES\n";	
			}else{
				cout<<"NO\n";
			}
		}
	}
	return 0;
}
