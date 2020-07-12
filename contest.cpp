#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = 0,i=0;
		while(i<s.length() && (s[i]>='0' && s[i]<='9')){
			n = n*10+ (s[i]-48);
			i++;
		}
		i++;
		string x="";
		while(i<s.length()){
			x+=s[i];
			i++;
		}
		long total=0;
		for(int i=0; i<n; i++){
			cin>>s;
			if(s=="TOP_CONTRIBUTOR"){
				total+= 300;
			}else if(s=="CONTEST_HOSTED"){
				total+= 50;
			}else{
				string y="";
				int j=0;
				while((j<s.length()) && (s[j]>='A' && s[j]<='Z' || s[j]=='_')){
					y+=s[j];
					j++;
				}
				j++;
				int point=0;
				while(j<s.length()){
					point = point*10+ (s[j]-48);
					j++;
				}
				if(y=="CONTEST_WON"){
					total += 300;
					if(point<=20){
						total += (20-points);
					}
				}else{
					total+= points;
				}
			}
		}
		if(x=="INDIAN"){
			cout<<total%200<<"\n";
		}else{
			cout<<total%400<<"\n";
		}
	}
	
}
