#include<bits/stdc++.h>
using namespace std;
int knapsack(int v[],int w[],int n,int  c){
if(n==0||c==0){
    return 0;
}
if (w[n-1]>c)
{
   return knapsack(v,w,n-1,c); 
}
return max(knapsack(v,w,n-1,c-w[n-1])+v[n-1],knapsack(v,w,n-1,c));

}
int main(){
    int v[]={100,50,150};
    int w[]={10,20,30};
    int n=3;
    int c=50;
    cout<<knapsack(v,w,n,c);
    
}