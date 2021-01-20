#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    string arr[tc];
    for (int i = 0; i < tc; i++)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i] ;
        }

        sort(v.begin(), v.end());
        // size would be dynamically reducing
        for (int i = 1; i < v.size();)
        {
            if (v[i] - v[i - 1] <= 1)
            {
                v.erase(v.begin() + i - 1);
            }
            else
                i++;
        }
        if (v.size() == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }

    }
}