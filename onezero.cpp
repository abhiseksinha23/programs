#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()<3){
			cout<<"0\n";
			continue;
		}
		if(s.length()==0){
			cout<<"0\n";
			continue;
		}
		
		
		
		int one=0,zero=0,zi=-1,oi=-1;
		for(int i=0; i<s.length(); i++){
			if(s[i]=='1'){
				one++;
				oi=i;
			}else{
				zero++;
				zi=i;
			}
		}
		if(one==0 || zero==0){
			cout<<"0\n";
			continue;
		}
		
		int count= INT_MAX;
			int n = s.length()-1;
//		vector<int>oc(s.length(),0);
//		vector<int>zc(s.length(),0);
//		int co=0,cz=0;
//		if(s[0]=='1'){
//			oc[0]=1;
//		}else{
//			zc[0] =1;
//		}
//		for(int i=1; i<n; i++){
//			oc[i] = oc[i-1];
//			zc[i] = zc[i-1];
//			if(s[i]=='1'){
//				oc[i]++;
//			}else{
//				zc[i]++;
//			}
//		}
	
		for(int i=0; i<s.length(); i++){
			int zc=0,oc=0;
			for(int j=0; j<=i; j++){
				if(s[j]=='0')zc++;
			}
			for(int j=i+1; j<s.length(); j++){
				if(s[j]=='1')oc++;
			}
			int x = zc+oc;
		//	int x = zc[i] + (oc[n-1]-oc[i]);
			count =min(count,x);
		}
		for(int i=0; i<s.length(); i++){
			int zc=0,oc=0;
			for(int j=0; j<=i; j++){
				if(s[j]=='1')oc++;
			}
			for(int j=i+1; j<s.length(); j++){
				if(s[j]=='0')zc++;
			}
			int x = zc+oc;
		///	cout<<x<<" ";
			count =min(count,x);
		//	cout<<count<<"\n";
		}
		cout<<count<<"\n";
//		if(s[0]=='1'){
//			int i=0;
//			while(i<s.length() && s[i]=='1'){
//				i++;
//			}
//			while(i<s.length() && s[i]=='0'){
//				i++;
//			}
//			if(i==s.length()){
//				cout<<"0\n";
//				continue;
//			}
//		}else{
//			int i=0;
//			while(i<s.length() && s[i]=='0'){
//				i++;
//			}
//			while(i<s.length() && s[i]=='1'){
//				i++;
//			}
//			if(i==s.length()){
//				cout<<"0\n";
//				continue;
//			}
//		}
//	
//		int i=1,ss=0,ee=0;
//		one=0,zero=0;
//		while(i<s.length()){
//			if(s[i]!=s[i-1] && ss==0){
//				ss=i;
//				//break;
//			}
//			if(s[i]!=s[i-1]){
//				ee=i-1;	
//			}
//			i++;
//		}
//		if(s[0]==s[s.length()-1]){
//			for(int i=ss; i<s.length(); i++){
//			if(s[i]=='1'){
//				one++;
//			}else{
//				zero++;
//			}
//		}
//		}else{
//		//	cout<<ss<<" "<<ee<<" ";
//			for(int i=ss; i<=ee; i++){
//			if(s[i]=='1'){
//				one++;
//			}else{
//				zero++;
//			}
//		}
//		}
//		
//			cout<<min(one,zero)<<"\n";
	}
	
	return 0;
}
