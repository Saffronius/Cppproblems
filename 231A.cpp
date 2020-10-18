
#include<bits/stdc++.h>
using namespace std;
 
bool comp(const pair<int,int>& a,const pair<int,int>& b){
    if(a.second>b.second)
    return true;
    else if(a.second == b.second and a.first>b.first)
    return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> pt(n);
 
    for(int i=0;i<n;i++){
        cin>>pt[i].first>>pt[i].second;
    }
 
    sort(pt.begin(),pt.end(),comp);
    int cnt=1;
    int pnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0)
        break;
        else{
            pnt+=pt[i].first;
            cnt+=pt[i].second;
        }
        cnt--;
    }
    cout<<pnt<<"\n";
    return 0;
}
