#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod=1000000007;

void solve(int n)
{
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> v[i];
	}
	if(n < 2)
	{
		cout << "0";
		return;
	}

	int len = 0;
	vector<int> res(n);
	res[0] = v[0];
	res[1] = v[1];
	for(int i = 2; i < n; i++)
	{
		res[i] = 2 * res[i-1] - res[i-2];  
	}

	bool flag = false;
	int pos = 0;
	for(int i = 0; i < n; i++)
	{
		if(v[i] == res[i])
			len++;
		else
		{
			flag = true;
			pos = i;
			break;
		}
	}

	int len2 = 0;
	v[pos] = res[pos];
	for(int i = 0; i < n;i++)
	{
		if(v[i] == res[i])
			len2++;
		else
		{
			break;
		}
	}
	cout << max(len, len2);
}
int main()
{
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++)
	{
		int n; cin >> n;
		cout << "Case #" << t << ": ";
		solve(n);
		cout << endl;
	}
}