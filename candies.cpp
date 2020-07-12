#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,k;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long r = n%k;
		long d = n/k;
		long add =0;
		if(r==0){
			cout<<n<<"\n";
			continue;
		}
		if(r>(k/2)){
			add = k/2;	
		}else{
			add = r;
		}
		long total = d*k + add;
		cout<<total<<"\n";
	}
	
	return 0;
}
