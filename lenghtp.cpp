#include<bits/stdc++.h>
using namespace std;

int main(){
	long l;
	cin>>l;
	string s;
	cin>>s;
	long c=0,i=0;
	while(i<l){
		if(s[i]=='a' && i<l){
			c++;
			s[i]='z';
				//i++;
		}
		if(s[i]=='b'&& c>0 && i<l){
			c--;
			s[i]='z';
			//i++;
		}
		i++;
	}
	if(c==l){
		cout<<l<<"\n";
		return 0;
	}
	long len=0;
	cout<<s<<"\n";
	for(int i=0; i<l;i++){
		if(s[i]=='a'|| s[i]=='b')len++;
	}
	cout<<len<<"\n";
	return 0;
}
