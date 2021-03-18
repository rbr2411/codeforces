#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cin >> n;
    int a,b;
    a = n/3;
    b = n/5;
    int c = n/15;
    a = a * (a + 1) * 3;
    sum += a/2;
    b = b * (b+1) * 5;
    sum += b/2;
    c = c * (c+1) * 15;
    sum -= c/2;
    cout << sum << endl;
}