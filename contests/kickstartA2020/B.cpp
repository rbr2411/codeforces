// DP Problem
// cannot be solved by Greedy Algorithms
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod = 1000000007;

void solve(int n, int k, int p)
{
	vector<int> s[n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < k; j++)
		{
			int a;
			cin >> a;
			s[i].push_back(a);
		}
	}
	int arr[n+1][k+1][p+1];
	for(int i = 0; i <= n; i++)
	{
		arr[i][0][0] = 0;
	}

	for(int j = 0; j <= k; j++)
	{
		arr[0][j]
	}
}


int main()
{
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++)
	{
		int n, k, p;
		cin >> n >> k >> p;
		cout << "Case #" << t << ": ";
		solve(n,p,k);
	}
}