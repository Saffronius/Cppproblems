#include<iostream>
#include<vector>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	int dp(int,vector<int>);
	for (int i = 0; i < t; i++)
	{
		vector<int> stairs(1000,-1);
		int n;
		cin>>n;
		int result=dp(n,stairs);
        cout<<result;
	}

}

int dp(int n,vector<int> stairs)
{
	if((n==1)||(n==2))
		return n;
	else if(n==3)
		return 4;
	else 
	{
		if(stairs[n]!=-1)
		 return stairs[n];
        else
         {
         	stairs[n]= dp(n-1)+dp(n-2)+dp(n-3);
         	return stairs[n];
         }

}

