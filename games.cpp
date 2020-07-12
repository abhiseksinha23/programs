#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long a,b;
		cin>>a>>b;
		if(a==0 || b==0){
			cout<<"0\n";
			continue;
		}
		if(a<2 && b<2){
			cout<<"0\n";
			continue;
		}
		if((a>=(2*b))|| (b>=(2*a))){
			cout<<min(a,b)<<"\n";
			continue;
		}
//		if(a==b){
//			if()
//		}
		cout<<(a+b)/3<<"\n";
//			if(a==b){
//			cout<<(a/2)+1<<"\n";
//		}
//		if(a%2==0 && b%2==0){
//			cout<<max(a,b)/2<<"\n";
//			continue;
//		}
//		if(a%2!=0 && b%2!=0){
//			cout<<(max(a,b)/2)+1<<"\n";
//			continue;
//		}
//		cout<<(max(a,b)/2)+1<<"\n";
		
	}
	return 0;
}
