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

void maxProfit(vector<int> w, std::vector<int>p, int wt)
{
	int num_elements = p.size();
	int i;
	multimap<double, int>ratio;
	double profit_max = 0;
	for (i = 0; i < num_elements; ++i)
	{

		/* code */
		ratio.insert(make_pair((double)p[i] / w[i], i));
	}
	//declare a reverse iterator for multimap
	multimap <double, int>::reverse_iterator it;
	for (it = ratio.rbegin(); it != ratio.rend(); it++)
	{
		/* code */
		double frac = (double) wt / w[it->ss];
		if (wt >= 0 && wt >=  w[it->ss])
		{
			/* code */
			profit_max += p[it->ss];
			wt -= w[it->ss];
		}
		else if (wt < w[it->ss])
		{
			profit_max += frac * p[it->ss];
			break;
		}
	}
	cout << "Max profit earned is: " << profit_max;
}
int main()
{
	c_p_c();
	int n;
	cin >> n;
	vector<int> w(n), p(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> w[i] >> p[i];
	}
	int wt;
	cin >> wt; // max wt that can be carried in bag
	maxProfit(w, p, wt);

}