#include <bits/stdc++.h>
using namespace std;
bool isPrime(long p)
{
    long count = 0;
    for(int i =1; i <= p; i++)
    {
        if(p % i == 0)
            count++;
    }
    if(count == 2)
        return true;
    else return false;
}
bool isTPrime(long a)
{
    long b = sqrt(a);
    if(b*b != a)
        return false;
    else return isPrime(b);
}
int main()
{
    int n;
    cin >> n;
    vector<long> v;
    for(int i =0;i < n; i++)
    {
        long a;
        cin >> a;
        v.push_back(a);
    }
    for(int i =0; i< n; i++)
    {
        cout << (isTPrime(v[i])? "YES":"NO") << endl;
    }
}