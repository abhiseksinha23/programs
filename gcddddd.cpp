#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int>odd;
	vector<int>even;
	int x;
	for(int i=1; i<=(2*n); i++){
		cin>>x;
		if(x%2==0){
			even.push_back(i);
		}else{
			odd.push_back(i);
		}
	}
	int count = n-1,size=even.size();
	for(int i=0; i<even.size(); i+=2){
		if(size<=1 || count==0){
			break;
		}
		size-=2;
		cout<<even[i]<<" "<<even[i+1]<<"\n";
		count--;
	}
	size = odd.size();
	for(int i=0; i<odd.size(); i+=2){
		if(size<=1 || count==0){
			break;
		}
		cout<<odd[i]<<" "<<odd[i+1]<<"\n";
		size-=2;
		count--;
}
	}
	return 0;
}
