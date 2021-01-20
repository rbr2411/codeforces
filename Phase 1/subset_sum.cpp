#include <bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define pb              push_back
#define pii             pair<int , int>
#define vi              vector<int>
#define mii             map<int, int>
#define fo(i,n)         for(int i=0;i<n;i++)

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}

int subsetSum(std::vector<int> A, int sum)
{
	if (sum == 0)
	{
		return 1;
	}
	int n = A.size();
	int a[n][sum + 1]; // Matrix method
	for (int i = 0; i < n; ++i)
	{
		/* code */
		a[i][0] = 1;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i][sum] = 0; // initially entries in last column is set to zero.
	}
	for (int j = 0; j <= sum; ++j)
	{
		if (A[0] != j)
		{
			a[0][j] = 0;
		}
		else a[0][j] = 1;
		if (a[0][sum] == 1)
		{
			return 1;
		}
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j <= sum; ++j)
		{
			if (A[i] > j)
			{
				a[i][j] = a[i - 1][j];
			}
			else
			{
				a[i][j] = a[i - 1][j - A[i]]; // go to (i-1)th row and (j-A[i])th column
			}
		}
		if (a[i][sum] == 1)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	c_p_c();
	int n;
	cin >> n;
	std::vector<int> A(n);;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	int sum;
	cin >> sum;
	if (subsetSum(A, sum) == 1)
	{
		cout << "There exists a subset with given sum.";
	}
	else cout << "There do not exist a subset with given sum.";
}