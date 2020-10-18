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
	long n;
	vector<long> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (long j = 3; j < n; j++)
		{
			v[j] = (v[j - 1] + v[j - 2] + v[j - 3]) % 10000000007 ;
		}
		cout << v[n - 1] << '\n';
	}
	return 0;
}
