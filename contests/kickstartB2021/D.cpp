#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod = 1000000007;

vector<vector<ll>> pattern;
vector<vector<ll>> route;
vector<vector<pair<int,ll>>> adj;
vector<bool> vis;
vector<ll> res;

vector<vector<ll>>& graph(int n)
{
	pattern.clear();
	adj.clear();
	adj.assign(n+1,vector<pair<int,ll>>(1));
	//num of edges in tree = n-1
	for(int i = 0; i <n-1; i++)
	{
		ll x, y, li, ai;
		cin >> x >> y >> li >> ai;
		pattern.push_back({x,y,li,ai});
		adj[x].push_back(make_pair(i,y));
		adj[y].push_back(make_pair(i,x));
	}
	return pattern;
}

void visited(int n)
{
	vis.clear();
	vis.assign(n+1, false);
	return;
}

vector<vector<ll>> & way(int q)
{
	route.clear();
	while(q--)
	{
		ll ci, wi;
		cin >> ci >> wi;
		route.push_back({ci, wi});
	}
	return route;
}

void dfs(ll s, ll d, ll w)
{
	vis[s] = true;
	if(s == d)
	{
		vis[0] = true;
		return;
	}
	for(auto v: adj[s])
	{
		if(!vis[v.second] && !vis[0])
		{
			if(pattern[v.first][2] <= w)
				res.push_back(pattern[v.first][3]);
			dfs(v.second,d,w);
		}
	}
	return;
}

ll gcd(ll a, ll b)
{
	if(a == 0)
	{
		return b;
	}
	return gcd(b% a, a);
}

ll groupGcd(vector<ll> res)
{
	int len = res.size();
	ll d = res[0]; // d is gcd
	for(int i = 1; i < len; i++)
	{
		d = gcd(d,res[i]);
		if(d==1)
			return d;
	}
	return d;
}

void solve(int n, int q)
{
	graph(n);
	way(q);
	visited(n);
	for(int i = 0; i < q; i++)
	{
		res.clear();
		dfs(route[i][0],1,route[i][1]);
		int len = res.size();
		//cout << len << endl;
		//for(auto it: res)
		// {
		// 	cout << it << endl;
		// }
		if(len == 0)
		{
			cout << "0 ";
			continue;
		}
		cout << groupGcd(res) << " ";
	}
}


int main()
{
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++)
	{
		int n,q ; cin >> n >> q;
		cout << "Case #" << t << ": ";
		solve(n, q);
		cout << endl;
	}
}