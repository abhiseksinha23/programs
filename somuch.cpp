#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;	
	vector<int>arr(n);
	queue<int>q;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]!=i+1){
			q.push(arr[i]);
		}
	}
	if(q.size()==0){
		cout<<"0\n";
		continue;
	}
	int xx=0;
	for(int i=0; i<n-1; i++){
		if(arr[i]<arr[i+1]){
			xx=1;
			break;
		}
	}
	if(xx==0){
		cout<<"-1\n";
		continue;
	}
	int count=0,cc=0;
	vector<pair<int,pair<int,int> > >ans;
	while(!q.empty()){
		int s = q.size();
		int a,b,c;
		int i=0,f= 1;
		while(i<s){
			if(f==1){
				a = q.front();q.pop();
				b = q.front();q.pop();
				c = q.front();q.pop();
				if(a<b && b>c  && a>c){
					count++;
					ans.push_back(make_pair(c,make_pair(a,b)));
				}else{
					f = 0;
					q.push(a);
					a = b;
					b = c;
				}
				i+=3;
			}else{
				c = q.front();q.pop();
				if(a<b && b>c && a>c){
					ans.push_back(make_pair(c,make_pair(a,b)));
					count++;
					i++;
					f = 1;
				}else{
					q.push(a);
					a = b;
					b = c;
					i++;
				}
			}
			if(count>k){
				cc=1;
				break;
			}
		}
			if(count>k){
				cc=1;
				break;
			}
				if(f==0){
				q.push(a);
				q.push(b);
			}
//				if(q.size()<=2){
//				cc=1;
//				cout<<q.size()<<" ";
//				break;
//			}
	}
			if(cc==1){
			cout<<"-1\n";
		}else{
			cout<<count<<"\n";
			for(int i=0; i<ans.size(); i++){
				pair<int,int>p = ans[i].second;
				cout<<ans[i].first<<" "<<p.first<<" "<<p.second<<"\n";
			}
		}	
}
return 0;
}
