#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x = 2*(min(a,b));
		int y = max(max(a,b),x);
		cout<<y*y<<"\n";
	}
	return 0;
}
