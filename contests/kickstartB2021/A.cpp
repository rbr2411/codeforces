#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod= 1000000007;

void solve(int n)
{
	string s;
	cin >> s;
	vector<int> v;
	v.assign(n, 0);
	int cnt = 1;
	v[0] = 1;
	for(int i =1; i < n; i++)
	{
		if(s[i] > s[i-1])
			v[i] = v[i-1] +1;
		else v[i] = 1; 
	}
	for(int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	return;
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