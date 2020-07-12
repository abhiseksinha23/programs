#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n>1e8){
		for(long long i=1; i<=1e8; i++){
			cout<<"c";
		}
		cout<<"odeforce";
		n  = n-1e8;
		for(int i=1; i<=n; i++){
			cout<<"s";
		}
		cout<<"\n";
		return 0;
	}
	char c ='s';
	cout<<"codeforces";
//	vector<string>arr(8);
//	vector<long long>count(8);
//	long long x = 100000000;
//	int c=0;
//	while(x>1){
//		count[c++] = x;
//		x = x/10;
//	}
//	string s1="";
//	for(long long i=10; i<=100000000; i+=10){
//		s1 +="ssssssssss";
//		if(i==10000000){
//			arr[2] = s1;
//		}
//		if(i==1000000){
//			arr[3] = s1;
//		}
//		if(i==100000){
//			arr[3] = s1;
//		}
//		if(i==10000){
//			arr[4] = s1;
//		}
//		if(i==1000){
//			arr[5] = s1;
//		}if(i==100){
//			arr[6] = s1;
//		}
//		if(i==10){
//			 arr[7]= s1;
//		}
////		if(i==100){
////			arr[8] = s1;
////		}
////		if(i==10){
////			arr[9] = s1;
////		}
//	}
//	arr[0] = s1;
//
//	cout<<"codeforces ";
//	for(int i=0; i<10; i++){
//		while(n1>=count[i]){
//			cout<<arr[i];
//			n1-=count[i];
//		}
//	}
//	for(long long i=1; i<=n1; i++){
//		cout<<"s";
//	}
	//string ans = "codeforces";
	
//	long long j = 0;
//	
////	while(j<n){
		long long i = 1;
//	//	string s ="s";	
		while(i<=n && (i*2)<=n){
		 cout<<string(i,c);
		//	s += s;
			i = i*2; 
	}
long long p = n-i;
if(p>0){
	cout<<string(p,c);
}
//	for(long long j=i; j<=n; j++){
//		cout<<"s";
//	}
//	if(i==n){
//		break;
//	}
//	n = n-(i/2);	
//	}
	cout<<"\n";
	return 0;
}
