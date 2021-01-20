#include<bits/stdc++.h>
using namespace std;
# define ll 1000000007
int main()
{
    int n;
    cin >> n;
    if(n % 2 == 0)
        {
            long long a = (pow(2,n-1)-1);
            a = a % ll; 
            cout << 3 * a;
        }
    else 
    {
        long long b = pow(2,n-2);
        b = b% ll;
        cout << 3 * b;
    }
    
}