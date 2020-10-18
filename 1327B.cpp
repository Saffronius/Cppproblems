#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,k,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ar[n+1]={0},ar2[n+1]={0};
		for(i=0;i<n;i++)
		{
			cin>>k;
			for(j=0;j<k;j++)
			{
				cin>>b;
				if(ar[b]==0&&ar2[i+1]==0){
				ar[b]++;ar2[i+1]++;}
			}
		}
		for(i=1;i<=n;i++)
		{
			if(ar[i]==0)
			break;
		}
		for(j=1;j<=n;j++)
		{
			if(ar2[j]==0)
			break;
		}
		if(i==j&&i==n+1)cout<<"OPTIMAL\n";
		else {
			cout<<"IMPROVE\n";
			cout<<j<<" "<<i<<endl;
		}
	}
	return 0;
}
