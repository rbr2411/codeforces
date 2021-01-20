#include<iostream>
using namespace std;
static int count = 0;
long long fib(int n, long long *memo)
{
    memo[0] = 0;
    memo[1] = 1;
    for (int i = 2; i < n+1; i++)
    {
        memo[i] = memo[i-1] + memo[i-2];
    }
    count++;
    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    
    long long memo[n+1];
    for (int i = 0; i < n+1; i++)
    {
        memo[i] = -1;
        /* code */
    }
    cout << n << "th fibonacci number is: ";
    cout << fib(n,memo) << endl;
    cout << "Number of function calls required: " << count;
}