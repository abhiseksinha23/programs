#include<bits/stdc++.h>
using namespace std;
set<int> div(long n) 
{ 
    // Note that this loop runs till square root 
    set<int>s;
    for (long i=2; i*i<n; i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                s.insert(i);
  
            else{
            	s.insert(i);
				s.insert(n/i); 	
			}
        } 
    }
	return s; 
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		if(n<8){
			cout<<"NO\n";
			continue;
		}
		set<int>s= div(n);
		if(s.size()<3){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
			vector<int>a;
			long k=0,three;
			set<int>::iterator i;
			for(i=s.begin();i!=s.end();i++){
				a.push_back(*i);
//				cout<<*i<<" ";
			}
//			cout<<"\n";
			three = (n/(a[0]*a[1])); 
//			for(int i=2; i<a.size();i++)three*=a[i];
			cout<<a[0]<<" "<<a[1]<<" "<<three<<"\n";
		}
	}	
	return 0;
}
