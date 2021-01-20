#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,k,x,y;
        cin >> n >> k >> x >> y;
            int min_dist = min(n-x,n-y);
            x+= min_dist;
            y+=min_dist;
            k--;
            if (x==n && y==n||x==n && y ==0|| x ==0 && y==n|| x==0 && y==0)
        {
            cout << x << " " << y << endl; 
            continue;
        }
        k = k % 4;
        while(k--)
        {
            if(x==n)
            {
                x = y;
                y = n;
                continue;
            }
            if(y == n)
            {
                y = n-x;
                x = 0;
                continue;
            }
            if(x==0)
            {
                x = y;
                y = 0;
                continue;
            }
            if(y == 0)
            {
                y = n-x;
                x = n;
                continue;
            }
        }
         cout << x << " " << y << endl;
    }
}