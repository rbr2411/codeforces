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

int main()
{
	c_p_c();
	int tc; cin >> tc;
	for (int i = 0; i < tc; ++i)
	{
		/* code */
		int n;
		cin >> n;
		vi v(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> v[i];
		}
		int count = 1;
		set<int> s;
		set<int>b;
		for (int i = 0; i < n; ++i)
		{
			b.insert(v[i]);
		}
		for (int i = 0; i < n - 1; ++i)
		{
			/* code */
			if (v[i]  < v[i + 1])
			{
				count++;
			}
			else if (v[i] == v[i + 1])
			{
				if (n == 2)
				{
					count++;
					continue;
				}
				if (n > 3)
				{
					/* code */
					if (v[i] != v[0] || v[i] != v[n - 2])
					{
						/* code */
						s.insert(v[i]);
						v[i] = v[i] + 1;
					}
				}
				if (b.size() == 1)
				{
					count++;
				}

			}
		}
		cout << count + s.size() << endl;

	}
}

