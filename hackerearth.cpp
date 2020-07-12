/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,m,n,k,d;
    cin>>l>>m>>n>>k;
    int total = n;
    if(n>0){
        int cap = k-1;
        bool turn = (l>m);
         while(cap>0){
            if(!turn && m-n>=0)
            m-=n;
            else if(turn && l-n>=0)
            l-=n;
            else
             break;
            turn = !turn;
            cap--;
        }   
       // cout<<l<<" "<<m<<" "<<cap<<" ";
        if(cap!=0){
            if(m-n<0){
                l-= (n-m);
                if(l<0)l=0;
                m=0;
                total +=l;
            }else if(l-n<0){
                m-= (n-l);
                if(m<0)m=0;
                l=0;
                total +=m;
            }
            cout<<total<<"\n";
        }else{
            if(k%2==0){
            int c=total;
           while((m-k/2)>=0 && (l-k/2)>=0){
               c++;
               m -=k/2;
               l -=k/2;
           }
           if(m==0 && l==0){
               cout<<c<<"\n";
           }else if(m==0 && l!=0){
               cout<<c+l<<"\n";
           }else if(m!=0 && l==0){
               cout<<c+m<<"\n";
           }else{
               int x = min(m,l);
               int y = max(m,l);
               if(x+1==y || x==y){
                   c++;
               }else{
                   c++;
                   y -=(x+1);
                   c = c+y;
               }
               cout<<c<<"\n";
           }
           }else{
            int c=total;
            if(m<l){
                while((m-k/2)>=0 && (l-((k/2)+1))>=0){
               c++;
               m -=k/2;
               l -=((k/2)+1);
           } 
             }else{
                while((m-((k/2)+1))>=0 && (l-((k/2)))>=0){
               c++;
               m -=((k/2)+1);
               l -=(k/2);
           }  
             }
           if(m==0 && l==0){
               int x=n;
               while(x>=k){
                   c--;
                   x-=k;
               }
               cout<<c<<"\n";
           }else if(m==0 && l!=0){
               l = l-n;
               if(l<0)l=0;
               cout<<c+l<<"\n";
           }else if(m!=0 && l==0){
               m = m-n;
               if(m<0)m=0;
               cout<<c+m<<"\n";
           }else{
               int x = min(m,l);
               int y = max(m,l);
               if(x+1==y){
                   c++;
               }else{
                   c++;
                   y -=(x+1);
                   c = c+y;
               }
               cout<<c<<"\n";
           }
        }
        }    
        
    }
    else{
        if(k==1){
            cout<<m+l<<"\n";
            return 0;
        }
        if(k%2==0){
            int c=0;
           while((m-k/2)>=0 && (l-k/2)>=0){
               c++;
               m -=k/2;
               l -=k/2;
           }
           if(m==0 && l==0){
               cout<<c<<"\n";
           }else if(m==0 && l!=0){
               cout<<c+l<<"\n";
           }else if(m!=0 && l==0){
               cout<<c+m<<"\n";
           }else{
               int x = min(m,l);
               int y = max(m,l);
               if(x+1==y || x==y){
                   c++;
               }else{
                   c++;
                   y -=(x+1);
                   c = c+y;
               }
               cout<<c<<"\n";
           }
           }else{
            
             int c=0;
             if(m<l){
                while((m-k/2)>=0 && (l-((k/2)+1))>=0){
               c++;
               m -=k/2;
               l -=((k/2)+1);
           } 
             }else{
                while((m-((k/2)+1))>=0 && (l-((k/2)))>=0){
               c++;
               m -=((k/2)+1);
               l -=(k/2);
           }  
             }
           
           if(m==0 && l==0){
               int x=n;
               while(x>=k){
                   c--;
                   x-=k;
               }
               cout<<c<<"\n";
           }else if(m==0 && l!=0){
               l = l-n;
               if(l<0)l=0;
               cout<<c+l<<"\n";
           }else if(m!=0 && l==0){
               m = m-n;
               if(m<0)m=0;
               cout<<c+m<<"\n";
           }else{
               int x = min(m,l);
               int y = max(m,l);
               if(x+1==y){
                   c++;
               }else{
                   c++;
                   y -=(x+1);
                   c = c+y;
               }
               cout<<c<<"\n";
           }
        }
    }
    return 0;
}
