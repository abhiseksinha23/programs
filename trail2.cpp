#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string>arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		long total=0;
		vector<bool>isdone(n,false);
		for(int i=0; i<n; i++){
			int maxi,count=0;
			if(!isdone[i]){
				for(int j=0; j<n; j++){
					if(!isdone[j] && i!=j){
						int k=0,l=0,fc=0,bc=0;
						while(arr[i][k]==arr[j][l] && k<arr[i].length() && j<arr[j].length()){
							k++;
							l++;
							fc++;
						}
						 k=arr[i].length()-1;
						 j=arr[j].length()-1;
						while(arr[i][k]==arr[j][l] && j>=0 && k>=0){
							k--;
							l--;
							bc++;
						}
						int x = min(fc,bc);
						if(x*x>count){
							count = x*x;
							maxi= j;
						}
					}
				}
					isdone[i] = true;
				isdone[maxi] = true;
			}
			total += count;
		}
		cout<<total<<"\n";
	}
	return 0;
}
