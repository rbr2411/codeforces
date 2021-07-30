#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod = 1000000007;

void solve(int n, int b)
{
	vector<int> h(n);
	for(int i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	sort(h.begin(),h.end());
	int cnt = 0, alpha = 0;
	for(int i =0; i < n;i++)
	{
		if(alpha+ h[i] <= b)
		{
			cnt++;
			alpha += h[i];
		}
		else break;

	}
	cout << cnt << endl;
}


int main()
{
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++)
	{
		int n, b;
		cin >> n >> b;
		cout << "Case #" << t << ": ";
		solve(n,b);
	}
}