#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
	//	cin>>n>>x;
		vector<int>arr(n);
		int even=0,odd=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]%2==0){
				even++;
			}else{
				odd++;
			}
		}
		if(x>n){
			cout<<"No\n";
			continue;
		}
		if(odd==0){
			cout<<"No\n";
			continue;
		}
		if(even==0 && x%2==0){
			cout<<"No\n";
			continue;
		}
		if(even==0 && x%2!=0){
			cout<<"Yes\n";
			continue;
		}
		if(x%2!=0){
			if(odd>=x){
				cout<<"Yes\n";
				continue;
			}
			int f=0;
			for(int i=1; i<=odd; i+=2){
				if(x-i<=even){
					f=1;
					cout<<"Yes\n";
					break;
				}
			}
			if(f==0){
				cout<<"No\n";
			}
		}else{
			int f=0;
			for(int i=1; i<=odd; i+=2){
				if(x-i<=even){
					f=1;
					cout<<"Yes\n";
					break;
				}
			}
			if(f==0){
				cout<<"No\n";
			}
		}
		
		
//		int rem = x-even;
//		if(rem>0){
//			if(rem%2==0)
//		}
//		
//		
//		if(x%2!=0){
//			if(x<=odd){
//				cout<<"Yes\n";
//				continue;		
//			}
//			int f=0;
//			for(int i=1; i<=odd; i+=2){
//				if(even-i>=0){
//					f=1;
//					cout<<"Yes\n";
//					break;
//				}
//			}
//			if(f==0){
//					cout<<"No\n";
//			continue;
//			}
//				
//		}else{
//			int f=0;
//			for(int i=1; i<=odd; i+=2){
//				if(even+i==x){
//					f=1;
//					cout<<"Yes\n";
//					break;
//				}
//			}
//			if(f==0){
//					cout<<"No\n";
//			continue;
//			}
//		}
	}
	return 0;
}
