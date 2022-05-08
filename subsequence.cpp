#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string v,int i){
    if (i>=s.size())
    {
       cout<<v<<endl;
       return;
       
    }
    subseq(s,v,i+1);

    v.push_back(s[i]);
    subseq(s,v,i+1);

}


int main(){
    string s="abc";
    int i=0;
   string v;
    subseq(s,v,i);
}