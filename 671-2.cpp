#include <bits/stdc++.h> 
using namespace std; 
#define fo(i, n)  for(int i = 0; i < n; i++) 
#define ff first 
#define ss second 
#define ll long long
typedef pair<int, int> pii; 
typedef vector<int> vi; 

// Drive Code 
int main() 
{ 
	// Fast Input/Output 
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 

	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

    int tc; 
    cin >> tc;
    fo(i,tc)
    {
        ll n;
        cin >> n;
        ll k, s,res;
        k = 1;
        s = 1;
        res = 0;
        while(s <= n)
        {
            res+= 1;
            n -=s;
            k = 2 * k + 1;
            s = (k * (k+1)) /2;
        }
        cout << res << endl;
    }




	
	return 0; 
} 
