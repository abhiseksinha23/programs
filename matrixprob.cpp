#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long arr[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>arr[i][j];
			}
		}
		long long count= n*m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(i==0 || j==0 || i==n-1 || j==m-1){
					continue;
				}
				int x1=i-1,x2=i+1,y1=j-1,y2=j+1;
				while(x1>=0 && x2<n && y1>=0 && y2<m){
					if((arr[x1][j]==arr[x2][j]) &&(arr[i][y1]==arr[i][y2])){
						x1--;
						x2++;
						y1--;
						y2++;
						count++;
					}else{
						break;
					}
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
