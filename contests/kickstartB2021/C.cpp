#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod=1000000007;

bool isPrime(ll p)
{
	ll cnt = 0;
	ll a = sqrt(p);
	for(ll i = 2; i <= a; i++)
	{
		if(p % i == 0)
			cnt++;
		if(cnt > 0)
			return false;
	}
	return true;
}

void prime(ll z)
{
	ll a = sqrt(z);
	vector<bool> v;
	v.assign(a+1, true);
	vector<ll> res;
	v[0] = v[1] = false;
	for(ll i = 2; i <= a; i++)
	{
		if(v[i])
		{
		
			for(ll j = i*i; j <= a;j+=i)
			{
				v[j] = false;
			}
		}
	}

	for(ll i = 2; i <= a; i++)
	{
		if(v[i])
			res.push_back(i);
	}

	// find prime next 
	ll prime1 = res[res.size() - 1], prime2 = 0;
	ll p = prime1 + 1;

	while(true)
	{
		if(isPrime(p))
		{
			prime2 = p;
			break;
		}
		p++;
	}		
	if(z >= prime1 * prime2)
		cout << prime1 * prime2;	
	else
	{
		prime2 = res[res.size() - 2];
		cout << prime1 * prime2;
	}
	
}

void solve(ll z)
{
	prime(z);
}
int main()
{
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++)
	{
		ll z;
		cin >> z;
		cout << "Case #" << t << ": ";
		
		solve(z);
		cout << endl;
	}
}