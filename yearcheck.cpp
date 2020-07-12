#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m1,m2;
		long y1,y2;
		cin>>m1>>y1;
		cin>>m2>>y2;
		int d = 1;
		for(long i=1; i<y1; i++){
			if(i%400==0 || (i%4==0 && i%100!=0)){
				d = (d+2)%7;
			}else{
				d = (d+1)%7;
			}
		}
		long count=0;
		if(m1<=2){
				if(y1%400==0 || (y1%4==0 && y1%100!=0)){
				if((d+2)%7==6){
					count++;
					d = (d+2)%7;
				}
			}else{
				if((d+2)%7==0 || (d+2)%7==6)
				 count++;
				 d = (d+1)%7;
			}	
		}
		//cout<<count<<" ";
		for(int i=y1+1; i<y2; i++){
			if(i%400==0 || (i%4==0 && i%100!=0)){
				if((d+2)%7==6){
					count++;
					d = (d+2)%7;
				}
			}else{
				if((d+2)%7==0 || (d+2)%7==6)
				 count++;
				 d = (d+1)%7;
			}
		}
		if(y1==y2){
			cout<<count<<"\n";
			continue;
		}else{
			if(m2>=2){
				if(y2%400==0 || (y2%4==0 && y2%100!=0)){
				if((d+2)%7==6){
					count++;
					d = (d+2)%7;
				}
			}else{
				if((d+2)%7==0 || (d+2)%7==6)
				 count++;
				 d = (d+1)%7;
			}	
		}
		}
		cout<<count<<"\n";
	}
	return 0;
}
