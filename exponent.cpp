#include<bits/stdc++.h>
using namespace std;
int printexponent(int n,int e){
    if(e==0){
        return 1;
    }
  int ans=printexponent(n,e/2);
  if(e&1){
       return n*ans*ans;
      
  }else{return ans*ans;
     
  }
}

int main(){
    int n,e;
    cin>>n;
    cin>>e;
    cout<<printexponent(n,e);
}