#include<bits/stdc++.h>
using namespace std;

bool sorte(int a[],int n,int k){
     if(n>=k){
        
         return true;
     }
    if (a[n]<a[n-1])
    {
      return false;
    }
    
     sorte(a,n+1,k);
     
}
int main(){int n;
cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
  bool s=sorte(a,1,n-1);
  if(s){
      cout<<"sorted";
  }else{
      cout<<"unsorted";
  }
 
}