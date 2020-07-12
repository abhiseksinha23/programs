#include<bits/stdc++.h>
using namespace std;
long bet(long y1, long y2 , int st){
	long c=0;
	for(long i=y1; i<=y2; i++){
		for(int j=1; j<=12; j++){
			if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12){
				int d = 31;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+2;
				fs = fs%7;
				int ss = fs+7;
				int ed = 31-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+2)%7;
			}else if(j==2){
				if(i%400==0 || (i%4==0 && i%100!=0)){
					int d = 29;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st;
				fs = fs%7;
				int ss = fs+7;
				int ed = 29-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st)%7;
				}else{
					int d = 28;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st-1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 28-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st-1)%7;
				}
			}else{
				int d = 30;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 30-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+1)%7;
			}
		}
	}	
}
long start(int m, int st, long cy){
		long c = 0;
		for(int j=m; j<=12; j++){
			if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12){
				int d = 31;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+2;
				fs = fs%7;
				int ss = fs+7;
				int ed = 31-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+2)%7;
			}else if(j==2){
				if(cy%400==0 || (cy%4==0 && cy%100!=0)){
					int d = 29;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st;
				fs = fs%7;
				int ss = fs+7;
				int ed = 29-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st)%7;
				}else{
					int d = 28;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st-1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 28-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st-1)%7;
				}
			}else{
				int d = 30;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 30-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+1)%7;
			}
	}
	return c;
}
long end(int m, int st, long y){
		long c = 0;
		for(int j=1; j<=m; j++){
			if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12){
				int d = 31;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+2;
				fs = fs%7;
				int ss = fs+7;
				int ed = 31-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+2)%7;
			}else if(j==2){
				if(y%400==0 || (y%4==0 && y%100!=0)){
					int d = 29;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st;
				fs = fs%7;
				int ss = fs+7;
				int ed = 29-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st)%7;
				}else{
					int d = 28;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st-1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 28-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st-1)%7;
				}
			}else{
				int d = 30;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 30-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+1)%7;
			}
	}
	return c;
}
long same(int m, int n, int st, long y){
		long c = 0;
		for(int j=m; j<=n; j++){
			if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12){
				int d = 31;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+2;
				fs = fs%7;
				int ss = fs+7;
				int ed = 31-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+2)%7;
			}else if(j==2){
				if(y%400==0 || (y%4==0 && y%100!=0)){
					int d = 29;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st;
				fs = fs%7;
				int ss = fs+7;
				int ed = 29-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st)%7;
				}else{
					int d = 28;
					int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st-1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 28-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st-1)%7;
				}
			}else{
				int d = 30;
				int d1,d2;
				if(st>5){
					d1 = 12-st+1;
				}else{
					d1 = 5-st+1;
				}
				d2 = 10+d1;
				int fs = st+1;
				fs = fs%7;
				int ss = fs+7;
				int ed = 30-ss;
				if(ed>=d1 && ed<=d2){
					c++;
				}
				st = (st+1)%7;
			}
	}
	return c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m1,m2;
		long y1,y2;
		cin>>m1>>y1;
		cin>>m2>>y2;
		int cd = 1;
		for(long i=1; i<y1; i++){
			if(i%400==0 || (i%4==0 && i%100!=0)){
				cd = (cd+2)%7;
			}else{
				cd = (cd+1)%7;
			}
		}
		if(y1==y2){
		    long ans = same(m1,m2,cd,y1);
		    cout<<ans<<"\n";
		    continue;
		}
		long ny=y1+1,ncd;
		
		if(ny%400==0 || (ny%4==0 && ny%100!=0)){
				ncd = (cd+2)%7;
			}else{
				ncd = (cd+1)%7;	
			}
		int ecd = cd;
		for(int i=y1; i<y2; i++){
			if(i%400==0 || (i%4==0 && i%100!=0)){
				ecd = (ecd+2)%7;
			}else{
				ecd = (ecd+1)%7;
			}
		}
		long ans =0;
		ans += bet(y1+1, y2-1, ncd) + start(m1,cd,y1) + end(m2,ecd,y2);
		cout<<ans<<"\n";
	}
	return 0;
}
