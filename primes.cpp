#include<bits/stdc++.h>
using namespace std;

void nprimes(int n, vector<int>&primes) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p])
	   		primes.push_back(p) ;
//          cout << p << " "; 
} 
int main(){
	vector<int>primes;
	nprimes(100000,primes);
	vector<int>s(100001,0);
	int q,t,x,l,r;
	cin>>q;
	while(q--){
		cin>>t;
		if(t==1){
			cin>>x;
			for(int i=0; i<primes.size(); i++){
				if(primes[i]>x){
					break;
				}
				if(x%primes[i]==0){
					s[primes[i]]++;
				}
			}
		}else{
		cin>>l>>r;
		long total=0;
		for(int i=0; i<primes.size();i++){
			if(primes[i]>r){
				break;
			}
			if(primes[i]>=l && primes[i]<=r){
				total+=s[primes[i]];
			}
		}	
		cout<<total<<"\n";
		}
	}
	return 0;
}
