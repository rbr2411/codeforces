#include <bits/stdc++.h>
using namespace std;
int fibonacci()
{
    int n = 0;
    vector<int> v(200);
    int sum = 0;
    v[0] = 1;
    v[1] = 2;
    sum += 2;
    int i = 2;
    n = 2;
    while(n <= 4000000)
    {
        v[i] = v[i-1] + v[i-2];
        n = v[i];
        if(!(v[i] & 1))
            sum += v[i];
        i++;
    }   
    return sum;
}
int main()
{
    // 4 Million - 40,00,000 = 4 x 10 pow 6
    cout << fibonacci() << endl;
}