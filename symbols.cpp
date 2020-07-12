#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char>st;
		long ans=0;
		for(int i=0; i<s.length(); i++){
			if(s[i]=='<'){
				st.push(s[i]);
			}else if(s[i]=='>'){
				if(st.empty()){
					break;
				}else{
					ans++;
					st.pop();
				}
			}
		}
		cout<<ans*2<<"\n";
	}
	return 0;
}
