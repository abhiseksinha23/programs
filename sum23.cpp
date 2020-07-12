#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<long>arr(n);
	long total=0;
	for(int i=0 ;i<n; i++){
		cin>>arr[i];
		total+=arr[i];
	}
	long dp[n+1][11]={0};
	long sum1=0;
	for(int i=n-1; i>=0; i--){
		for(int j=1; j<11; j++){
			if(j==1){
				dp[i][j]=total-sum1;
				sum1+=arr[i];
			}else{
				if(i+j>=n|| dp[i+j][j]==0){
					long sum=0;
					for(int k=i; k>=0; k-=j){
						sum+=arr[k];
					}
					dp[i][j]=sum;
				}else{
					dp[i][j]= dp[i+j][j]-arr[i+j];
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0 ;j<11; j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	long q;
	cin>>q;
	int l,r,d;
	while(q--){
		cin>>l>>r>>d;
		l--;
		r--;
		int d1 = r-l;
		if(d1%d==0){
			cout<<dp[r][d]-dp[l-d][d]<<"\n";
		}else{
			int x = d1%d;
			cout<<dp[r][d]-dp[l-x][d]<<"\n";
		}
		
	//	long sum=0;
//		for(int i=r; i>=l; i-=d){
//		 //sum+=arr[i];
//		cout<<i<<" "<<arr[i]<<" ";
//		}
	//cout<<sum<<"\n";
	}
	return 0;
}
