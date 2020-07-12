#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0; i<n; i++)cin>>arr[i];
		int m2=INT_MIN,m1=INT_MAX;
		for(int i=0; i<n; i++){
		int curr  = arr[i],lc=0,rc=0;
		int j=i-1,k=i+1;
			while(j>=0){
				if(abs(arr[j+1]-arr[j])<=2){
					lc++;
					curr = arr[j];
				}else{
					break;
				}
				j--;
			}
			while(k<n){
				if(abs(arr[k]-arr[k-1])<=2){
					rc++;
					curr = arr[k];
				}else{
					break;
				}
				k++;
			}
			int total = lc+rc+1;
//			cout<<total<<" ";
			m1 = min(total,m1);
			m2 = max(total,m2); 
		}
		cout<<m1<<" "<<m2<<"\n";
	} 
	return 0;
}
