#include<bits/stdc++.h>
using namespace std;
//int arr[] = {100,75,50,25};
int cal(int a,int b, int c, int d){
	int maxp=0;
	for(int i=0 ;i<4; i++){
		for(int j=0; j<4; j++){
			if(i!=j){
				for(int k=0; k<4; k++){
					if(j!=k){
						for(int l=0; l<4;l++){
						if(k!=l){
							int ans = a*arr[i] + b*arr[j] + c*arr[k] + d*arr[l];
							if(maxp<ans){
								maxp = ans;
							}
							}
						}	
					}
				}	
			}
		}
	}
	return maxp;
}
int slots(int x){
	if(x==12){
		return 0;
	}
	if(x==3){
		return 1;
	}
	if(x==6){
		return 2;
	}
	if(x==9){
		return 3;
	}
}
bool comp(pair<int,int>p ,pair<int,int>q){
	return p.first>=q.first;
}
int main(){
	int t,n;
	cin>>t;
	long total=0;
	while(t--){
	cin>>n;
	if(n==0){
		total+=0;
		cout<<"0\n";
		continue;
	}
	vector<bool>slot(4,false);
	vector<bool>price(4,false);
	long currloss = 0;
	vector<int>a(4,0);
	vector<int>b(4,0);
	vector<int>c(4,0);
	vector<int>d(4,0);
	int s;
	char m;
	for(int i=0 ;i<n; i++){
		cin>>m>>s;
		int x = slots(s);
		if(m=='A'){
			a[x]++;
		}else if(m='B'){
			b[x]++;
		}else if(m=='C'){
			c[x]++;
		}else{
			d[x]++;
		}
	}
	vector<bool>loss(4,true);
	vector<int>maxs(4,0);
	long maxp=0;
	for(int i=0 ;i<4; i++){
		for(int j=0; j<4; j++){
			if(i!=j){
				for(int k=0; k<4; k++){
					if(j!=k){
						for(int l=0; l<4;l++){
						if(k!=l){
							int ans = cal(a[i],b[j],c[k],d[l]);
							if(a[i]==0)ans-=100;
							if(b[j]==0)ans-=100;
							if(b[k]==0)ans-=100;
							if(c[l]==0)ans-=100;
							if(maxp<ans){
								maxp = ans;
							}
							}
						}	
					}
				}	
			}
		}
	}
	long ans = maxp;
	cout<<ans<<"\n";
	total+=ans;
	}
	cout<<total<<"\n";
	return 0;
}
