#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	vector<int>count(n+1,0);
	vector<int>ans;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]!=0)
		count[arr[i]]++;
	}
	for(int i=1; i<n+1; i++){
		if(count[i]==0){
			//cout<<i<<" ";
			ans.push_back(i);
		}
	}
	int i= 0,l=-1,k=0;
	while(i<n && k<ans.size()){
		if(arr[i]==0){
			if(i+1!=ans[k]){
				arr[i] = ans[k];
				k++;
				l = i;
			}else{
				if(l!=-1){
					swap(arr[l], arr[i]);
					arr[l] = ans[k++];
				}else{
					swap(ans[k],ans[k+1]);
					arr[i] = ans[k++];
					l = i;
				}
			}
		}
		i++;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
