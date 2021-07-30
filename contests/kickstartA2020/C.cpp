#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod = 1000000007;

void solve(int n, int k)
{
	vector<int> m(n);
	for(int i =0; i < n; i++)
	{
		cin >> m[i];
	}	
	if(k > 1)
	{	
		int diff = m[n-1] - m[0];
		int a = ceil((1.0 * diff)/(n+k-1)); 
		cout << a << endl;
		return;
	}
	double ans = 0;
	for(int i = 0; i < n-1; i++)
	{
		ans = max(ceil((1.0 * (m[i+1]-m[i]))/2),ans);
	}
	cout << ans << endl;
	return;
}


int main()
{
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++)
	{
		int n, k;
		cin >> n >> k;
		cout << "Case #" << t << ": ";
		solve(n,k);
	}
}