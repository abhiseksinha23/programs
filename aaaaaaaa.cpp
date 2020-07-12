#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		if(n%2!=0){
			cout<<"-1\n";
			continue;
		}
		int ans=0,f=0;
		int p=1;
	for(int j=0; j<10; j++){
		int co=0,c1=0;
		for(int i=0; i<n; i++){
			//cout<<arr[i]<<" ";
			if(arr[i]==0){
				co++;
				continue;
			}
			int r = arr[i]&1;
			if(r==1){
				c1++;
			}else{
				co++;
			}
			arr[i] = arr[i]>>1;
		}
		//cout<<"\n";
		if(co==c1 && c1!=0){
			f = 1;
			ans = ans + p;	
			break;
		}
	//	cout<<ans<<" ";
		 p = p*2;
	}
		if(f==1){
			multiset<int>s;
			int cc=0;
			for(int i=0; i<n; i++){
				s.insert(arr[i]);
			}
			for(int i=0; i<n ;i++){
				int x = arr[i]^ans;
				multiset<int>::iterator it = s.find(x)
				if(it==s.end()){
				
					cc=1;
					cout<<x<<" -1\n";
					break;
				}else{
					s.erase(it);	
				}
			}
			if(cc==0)
			cout<<ans<<"\n";	
		}
		else
		cout<<"-1\n";
	}
	
	
	return 0;
}
