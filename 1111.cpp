#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		vector<int>even;
		vector<int>odd;
		int ce=0,co=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]%2==0){
				ce++;
				even.push_back(arr[i]);
			}else{
				co++;
				odd.push_back(arr[i]);
			}
		}
		if(n%2!=0){
			cout<<"No\n";
			continue;
		}
		if(ce%2==0 && co%2==0){
			cout<<"Yes\n";
			continue;
		}
		int f=0;
	    for(int i=0; i<ce; i++){
	    	for(int j=0; j<co; j++){
	    		if(abs(even[i]-odd[j])==1){
	    			f = 1;
	    			break;
				}
			}
		}
		if(f==1){
			cout<<"Yes\n";
			continue;
		}else{
				cout<<"No\n";
			continue;
		}
	}
	return 0;
}
