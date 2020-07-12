#include<bits/stdc++.h>
using namespace std;
long num  = 50000;
bool checkprime(long n){
	for(long i=2; i<min(num,n); i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		bool lose = (n==1);
		
		if(n>2 && n%2==0){
			if((n&(n-1))==0){
				lose  =1;
			}
			if(n%4 && checkprime(n/2)){
				lose = 1;
			}
		}
		
		if(lose){
			cout<<"FastestFinger\n";
		}else{
			cout<<"Ashishgup\n";
		}
	}
	return 0;
}
