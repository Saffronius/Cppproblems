
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100002],l,r,sum=0,q,ans;
    int pre[100002];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        sum+=a[i-1];
        pre[i]=sum;   
    }
     cin>>q;
     while(q--){
         cin>>l>>r;
         ans=pre[r]-pre[l-1];
         ans=ans/10;
         cout<<ans<<endl;
     }
    return 0;
}
