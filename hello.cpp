// Template for Competitive Programming 

#include <bits/stdc++.h> 
using namespace std; 

#define fo(i, n) for (i = 0; i < n; i++) 
#define F first 
#define S second 
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

	int x; cin >> x;
	if(x & 1) cout << 12 << endl;


	return 0; 
} 
