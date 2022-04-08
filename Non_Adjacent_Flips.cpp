#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k=0,i,cnt=0;
    cin>>n;
    string s;
    cin>>s;

   for(i=0;i<n;i++){
       if(s[i]=='1'){ cnt++;
       if(s[i]==s[i+1] && i<n-1) k++;}
   }

  // cout<<cnt<<" "<<k<<'\n';
  
 //  cout<<endl;
    
    if(cnt==0) cout<<"0"<<"\n";

    else {
        if(k==0)
    cout<<"1"<<'\n';
    else cout<<"2"<<'\n';
    }
 
 }
}