#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int>x(n);
		vector<int>y(m);
		for(int i=0 ;i<n; i++)cin>>x[i];
		for(int i=0; i<m; i++)cin>>y[i];
		long ans=0;
		for(int i=0 ;i<n-1; i++){
			for(int j=i+1; j<n; j++){
				for(int k=0; k<m; k++){
					int a,b,c;
					a = x[i];
					b = x[j];
					c = y[k];
					long d1 = (a*a),d2=(b*b),d3=(c*c);
					if(d1== d2+d3){
						ans++;
					}else if(d2==d1+d3){
						ans++;
					}else if(d3==d1+d2){
						ans++;
					}
				}
			}
		}
		for(int i=0 ;i<m-1; i++){
			for(int j=i+1; j<m; j++){
				for(int k=0; k<n; k++){
					int a,b,c;
					a = y[i];
					b = y[j];
					c = x[k];
					long d1 = (a*a),d2=(b*b),d3=(c*c);
					if(d1== d2+d3){
						ans++;
					}else if(d2==d1+d3){
						ans++;
					}else if(d3==d1+d2){
						ans++;
					}
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
