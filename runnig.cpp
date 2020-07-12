#include<bits/stdc++.h>
using namespace std;
vector<long>p;
void seive(vector<bool>&prime){
	long n = 10000005;
	for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  	for(int i=2; i<n; i++){
  		if(prime[i]){
  			p.push_back(i);
		  }
	  }
}
vector<long> find(long n){
	vector<long>aa;
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			if(n/i==i){
				aa.push_back(i);
			}else{
				aa.push_back(i);
				aa.push_back(n/i);
			}
		}
	}
	return aa;
}
int main(){
	vector<bool>prime(10000005,true);
	seive(prime);
	int n;
	cin>>n;
	vector<long>arr(n);
	vector<long>ans1;
	vector<long>ans2;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(prime[arr[i]]){
			ans1.push_back(-1);
			ans2.push_back(-1);
		}else{
			long ans11=-1,ans22=-1;
			for(int j=0; j<p.size(); j++){
				if(arr[i]%p[j]==0){
					if(ans11==-1){
						ans11=p[j];
					}else{
						ans22=p[j];
						break;
					}
				}
			}
			if(ans11==-1 || ans22==-1){
				ans1.push_back(-1);
				ans2.push_back(-1);
			}else{
			ans1.push_back(ans11);
				ans2.push_back(ans22);
			}
//			long x=arr[i];
//			vector<long>a = find(x);
//			if(a.size()<2){
//				ans1.push_back(-1);
//				ans2.push_back(-1);
//			}else{
//				int f=0;
//				for(int i=0; i<a.size(); i++){
//					for(int j=i+1; j<a.size(); j++){
//						if(prime[a[i]+a[j]]){
//							f = 1;
//							ans1.push_back(a[i]);
//							ans2.push_back(a[j]);
//							break;
//						}
//					}
//				}
//				if(f==0){
//							ans1.push_back(-1);
//							ans2.push_back(-1);
//					
//				}
//			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<ans1[i]<<" ";
	}
	cout<<"\n";
		for(int i=0; i<n; i++){
		cout<<ans2[i]<<" ";
	}cout<<"\n";
	return 0;
}
