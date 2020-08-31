#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    int height = 0;
    int i = 0;
    while (result < n)
    {
        i++;
        result = (i + 2) * (i + 1) * i / 6;
        if(result <=n)height++; 
    }
    cout << height << endl;
}