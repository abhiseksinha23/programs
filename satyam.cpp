#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0,sum=0,i=1;
		while(sum<n){
			sum+=i;
			count++;
			i++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
