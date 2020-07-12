#include<bits/stdc++.h>
using namespace std;

long long maxSubArraySum(long a[], int size, long &start, long &end) 
{ 
    long long max_so_far = INT_MIN, max_ending_here = 0, s=0; 
  
    for (int i=0; i< size; i++ ) 
    { 
        max_ending_here += a[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
		return max_so_far; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long arr[n];
		int isneg=0,ispos=0,zero=0;
		long long total=0,min=INT_MAX,max= INT_MIN;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			total +=arr[i];
			if(min>arr[i])min = arr[i];
			if(max<arr[i])max = arr[i];
		}
//		if(min>0){
//			cout<<"YES\n";
//			continue;
//		}
//		if(max<0){
//			cout<<"NO\n";
//			continue;
//		}
		long start=0,end=0;
		long long sum = maxSubArraySum(arr, n, start, end);
		if(sum==total && start==0 && end==n-1){
			cout<<"YES\n";
			continue;
		}
	//	cout<<sum<<" "<<total<<" ";
		if(sum>=total){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		} 
	}
	return 0;
}
