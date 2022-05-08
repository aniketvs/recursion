#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n){
    if (n==1)
    {
        return true;
    }
    
   int res=check(a+1,n-1);
   return (a[0]<a[1] && res);
} 
int main(){int n=5;
    int a[n]={1,2,3,4,5};
   cout<<check(a,5);
}