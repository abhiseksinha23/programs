#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		if(a==b){
			cout<<"0\n";
			continue;
		}
		int count=0;
		if(a>b){
			while(a>b){
				if(a%8==0){
					a =  a/8;
				}else if(a%4==0){
					a = a/4;
				}else if(a%2==0){
					a = a/2;
				}else{
					break;
				}
				count++;
				if(a==b){
					break;	
				}
			}
			while(b>a){
				if(a*8<=b){
					a = a*8;
				}else if(a*4<=b){
					a = a*4;
				}else if(a*2<=b){
					a = a*2;
				}else{
					break;
				}
				count++;
				if(a==b){
					break;
				}
			}
			if(a==b){
				cout<<count<<"\n";
			}else{
				cout<<"-1\n";
			}
		}else{
			while(b>a){
				if(a*8<=b){
					a = a*8;
				}else if(a*4<=b){
					a = a*4;
				}else if(a*2<=b){
					a = a*2;
				}else{
					break;
				}
				count++;
				if(a==b){
					break;
				}
			}
			while(a>b){
				if(a%8==0){
					a =  a/8;
				}else if(a%4==0){
					a = a/4;
				}else if(a%2==0){
					a = a/2;
				}else{
					break;
				}
				count++;
				if(a==b){
					break;	
				}
			}
			if(a==b){
				cout<<count<<"\n";
			}else{
				cout<<"-1\n";
			}
		}
	}
	return 0;
}
