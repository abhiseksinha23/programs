#include<bits/stdc++.h>
using namespace std;
void f(int &x){
    register int c;
    x = 0;
    c = getchar();
    for(;(c>47 && c<58); c=getchar())
     x = (x<<1) + (x<<3) + c-48;
}

void f1(long &x){
    register long c;
    x = 0;
    c= getchar();
    for(;(c>47 && c<58); c=getchar())
     x = (x<<1) + (x<<3) + c-48;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],x;
    long xr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
         xr[i][j]=-1;
    }
    long total=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cin>>x;
            if(i==j){
                arr[i]=x;
            }
        }
    }
    long q;
    cin>>q;
    int a,b,c,t;
    while(q--){
        cin>>t>>a>>b>>c;
        a--;b--;
        if(xr[a][b]==(-1)){
            xr[a][b]=c;
        }else{
            xr[a][b]^=c;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             if(xr[i][j]!=(-1)){
                 for(int k=i; k<=j; k++){
                     arr[k]^=xr[i][j];
                 }
             }
        }
    }
    for(int i=0; i<n; i++)
    total+=arr[i];
    printf("%ld\n",total);
    return 0;
}
