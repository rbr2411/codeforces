// Optimized version
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
        while (k--)
        {
            if (x==n && y==n||x==n && y ==0|| x ==0 && y==n|| x==0 && y==0)
            break;
            if(k % 4 == 1)
            {
                x = y;
                y = n;
                break;
            }
            else if(k % 4 == 2)
            {
            
                y = n-x;
                x = 0;
                break;
            }
            else if(k %4 == 3)
            {
                x = y;
                y = 0;
                break;
            }
            else if(k % 4 == 0)
            {
                y = n-x;
                x = n;
                break;
            }
        }
        cout << x << " " << y << endl; 
        
    }
    
}