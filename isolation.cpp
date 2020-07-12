#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		vector<int>arr(26,0);
		for(int i=0; i<n; i++){
			arr[s[i]-'a']++;
		}
		int m=0;
		for(int i=0; i<26; i++){
			m = max(m,arr[i]);
		}
		while(q--){
			long c;
			cin>>c;
			if(c>=n || c>=m){
				cout<<"0\n";
				continue;
			}
			long count=0;
			for(int i=0; i<26; i++){
				if(arr[i]>c){
					count += (arr[i]-c);
				}
			}
			cout<<count<<"\n";
		}
	}
	
	return 0;
}

