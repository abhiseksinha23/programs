#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	vector<long>arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int l,r;
	while(q--){
		cin>>l>>r;
		long inc=0,drc=0;
		l--;
		r--;
		for(int i=l;i<r; i++){
			for(int j=i+1; j<r; j++){
				if(arr[j]>arr[j-1]){
					if(i==l && j==r){
						inc++;
					}else if(i==l && j!=r){
						if(arr[j]>arr[j+1]){
							inc++;
						}else{
							break;
						}
					}else if(i!=l && j==r){
						if(arr[i]<arr[i+1]){
							inc++;
						}else{
							break;
						}
					}
					else{
						if(arr[j]>arr[j+1] && arr[i]<arr[i+1]){
							inc++;
						}else{
							break;
						}
					}
				}else{
					break;	
				}
			}
		}
		
		for(int i=l;i<r; i++){
			for(int j=i+1; j<r; j++){
				if(arr[j]<arr[j-1]){
					if(i==l && j==r){
						drc++;
					}else if(i==l && j!=r){
						if(arr[j]<arr[j+1]){
							drc++;
						}else{
							break;
						}
					}else if(i!=l && j==r){
						if(arr[i]>arr[i+1]){
							drc++;
						}else{
							break;
						}
					}
					else{
						if(arr[j]<arr[j+1] && arr[i]>arr[i+1]){
							drc++;
						}else{
							break;
						}
					}
				}else{
					break;	
				}
			}
		}
		if(inc==drc){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
