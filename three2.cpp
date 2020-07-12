#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a=1,b=1,c=1;
		for(long i=2; i*i<=n; i++){
			if(n%i==0){
				a= i;
				n = n/i;
				break;
			}
		}
		if(a==1){
			cout<<"NO\n";
			continue;
		}
		for(long i=2; i*i<=n; i++){
			if(n%i==0 && i!=a){
				b= i;
				n = n/i;
				break;
			}
		}
		if(b==1 || n==a || n==b){
			cout<<"NO\n";
			continue;
		}
			cout<<"YES\n";
			cout<<a<<" "<<b<<" "<<n<<"\n";
		
	}	
	return 0;
}
