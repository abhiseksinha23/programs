#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		long k;
		cin>>n>>k;
		vector<int>arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
			vector<pair<int,pair<int,int> > > ans;
		if(n==4){
		    if(k>=3){
		        cout<<k<<"\n";
		        cout<<"1 4 3\n";
		        cout<<"4 2 3\n";
		        cout<<"2 3 4\n";
		    }else{
		        cout<<"-1\n";
		    }
		    continue;
		}
		if(n%2==0){
			int f=0,c=0;
		   for(int i=0; i<(n/2)-1; i++){
		   	swap(arr[n-1],arr[i]);
		        swap(arr[n-1],arr[n-2]);
		        ans.push_back(make_pair(arr[i],make_pair(arr[n-2],arr[n-1])));
		        c++;
		        if(c>k){
		            f = 1;
		            break;
		        }
		   }
//		   for(int i=0; i<n; i++){
//		   	cout<<arr[i]<<" ";
//		   }cout<<"\n";
		   swap(arr[n/2],arr[(n/2)-2]);
		        ans.push_back(make_pair(arr[(n/2)-2],make_pair(arr[n/2-1],arr[n/2])));
		        c++;
//		       //    	swap(arr[n-10],arr[i]);
//		        swap(arr[n-1],arr[n-2]);
		         ans.push_back(make_pair(arr[(n/2)-2],make_pair(arr[n/2-1],arr[n/2])));
		     //   ans.push_back(make_pair(arr[i],make_pair(arr[n-2],arr[n-1])));
		        c++;
		            if(f==1 || c>k){
		      cout<<"-1\n";  
		    }else{
		        	cout<<c<<"\n";
			for(int i=0; i<ans.size(); i++){
				cout<<ans[i].first<<" ";
				pair<int,int>p = ans[i].second;
				cout<<p.first<<" "<<p.second<<"\n";
			}
		    }
		}else{
		    int f=0;
		    long c=0;
		    for(int i=0; i<(n/2); i++){
		        swap(arr[n-1],arr[i]);
		        swap(arr[n-1],arr[n-2]);
		        ans.push_back(make_pair(arr[i],make_pair(arr[n-2],arr[n-1])));
		        c++;
		        if(c>k){
		            f = 1;
		            break;
		        }
		    }
		    if(f==1){
		      cout<<"-1\n";  
		    }else{
		        	cout<<c<<"\n";
			for(int i=0; i<ans.size(); i++){
				cout<<ans[i].first<<" ";
				pair<int,int>p = ans[i].second;
				cout<<p.first<<" "<<p.second<<"\n";
			}
		    }
		}
	}
	return 0;
}
