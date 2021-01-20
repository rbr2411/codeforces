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
		int n;
		cin >> n;
		vi v(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> v[i];
		}
		int count = 0;
		set<int> s;
		if (n == 1)
			cout << 0 << endl;
		else
		{
			vi b(n);
			for (int i = 0; i < n; ++i)
			{
				/* code */
				b[i] = v[i];
			}
			for (int i = 0; i < n; ++i)
			{
				/* code */
				for (int j = 0; j < n; ++j)
				{
					/* code */
					if (v[i] - b[j] > 0)
					{
						/* code */
						s.insert(v[i] - b[j]);
					}
				}
			}
			cout << s.size()  << endl;
		}

	}

}