#include<iostream>
using namespace std;
static int count = 0;
long long fib(int n, long long *memo)
{
    if(memo[n] != -1) return memo[n];
    count ++;
    if (n==0)
    {
        memo[n] = 0;
        return 0;
        /* code */
    }
    if (n==1)
    {
        memo[n] = 1;
        return 1;
        /* code */
    }
    long long sum = fib(n-1,memo)+fib(n-2,memo);
    memo[n]= sum;
    return sum;
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