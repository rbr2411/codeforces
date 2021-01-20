#include <bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define pb              push_back
#define pii             pair<int , int>
#define vi              vector<int>
#define mii             map<int, int>
#define fo(i,n)         for(int i=0;i<n;i++)

int main()
{
	int tc; cin >> tc; 
	while (tc--)
	{
		int n, m;
		cin >> n >> m;
		vi A(n), B(m);
		int johnSum = 0 , jackSum = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> A[i];
		}
		for (int i = 0; i < m; ++i)
		{
			/* code */
			cin >> B[i];
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			johnSum += A[i];
		}
			for (int i = 0; i < m; ++i)
			{
				/* code */
				jackSum += B[i];
			}
			if (johnSum > jackSum)
			{
				cout << 0 << endl;
				continue;
			}
			else
			{
				sort(A.begin(), A.end());
				sort(B.begin(), B.end());
				int count = 0;
				while ((johnSum <= jackSum) && count < min(m, n))
				{
					/* code */
					int johnMin = A[0];
					int jackMax = B[m - 1];
					A.erase(A.begin());
					B.pop_back();
					A.push_back(jackMax);
					B.insert(B.begin(), johnMin);
					count++;
					johnSum = johnSum - johnMin + jackMax;
					jackSum = jackSum - jackMax + johnMin;
				}
				if (johnSum > jackSum)
				{
					/* code */
					cout << count << endl;
				}
				else cout << -1 << endl;
			}
	}	
}