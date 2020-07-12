#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s,c;
		cin>>s>>c;
		int n=s.length(),m=c.length(),i=0,j=0,f=0;
		bool pos =false;
		while(i<n && j<m){
			if(s[i]>c[j]){
				for(int k=i+1; k<n; k++){
					if(s[k]<c[j]){
						swap(s[i],s[k]);
						cout<<s<<"\n";
						pos = true;
						break;
					}
				}
				f = 1;
				break;
			}else if(s[i]==c[j]){
				for(int k=i+1; k<n; k++){
					if(s[k]<c[j]){
						swap(s[i],s[k]);
						cout<<s<<"\n";
						pos = true;
						break;
					}
				}
				if(pos){
					f = 1;
					break;
				}
			}
			else if(s[i]<c[j]){
				cout<<s<<"\n";
				pos = true;
				break;
			}
			i++;
			j++;	
		}
		if(pos) continue;
		cout<<"---\n";
	}
	return 0;
}
