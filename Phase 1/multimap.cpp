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
	std::multimap<char, int> mymultimap;

	mymultimap.insert (std::make_pair('x', 10));
	mymultimap.insert (std::make_pair('y', 20));
	mymultimap.insert(std::make_pair('a', 12));
	mymultimap.insert (std::make_pair('y', 150));
	mymultimap.insert (std::make_pair('z', 9));
	mymultimap.insert(std::make_pair('z', 1));
	mymultimap.insert(std::make_pair('z', 11));
	mymultimap.insert(make_pair('b', 11));



	// show content:
	std::multimap<char, int>::reverse_iterator rit;
	for (rit = mymultimap.rbegin(); rit != mymultimap.rend(); ++rit)
		std::cout << rit->first << " => " << rit->second << '\n';

	return 0;

}