#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	for(int i=0;i<tc;i++)
	{
		int n;
		cin >> n;
		std::vector<int> a(n),b(n);
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> b[i];
		}
		auto it_a = min_element(a.begin(), a.end());
		auto it_b = min_element(b.begin(), b.end());
		long long moves = 0;
		int amin = *it_a;
		int bmin = *it_b;
		for(int i=0; i<n; i++)
		{
			moves += max(a[i] -amin, b[i] -bmin);
		}
		cout << moves << endl;	
	}
}