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
// 	for(int i=l;i<r; i++){
 bool istrue = (arr[0]<arr[1]);
 for(int i=l; i<r; i++){
 	if(arr[i]<arr[i+1]){
 		if(istrue){
 			inc++;
 			istrue = !istrue;
		 }
	 }else if(arr[i]>arr[i+1]){
	 	if(!istrue){
	 		drc++;
	 		istrue = !istrue;
		 }
}	 }
 
		//cout<<inc<<" "<<drc<<" ";
		if(inc==drc){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
