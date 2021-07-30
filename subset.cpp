// Count the number of subsets with a given difference.
#include <bits/stdc++.h>
using namespace std;
int subsetCount(int* arr, int n, int diff)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    
    if((sum - diff) % 2 != 0)
        return 0;
    
    int lsum = (sum - diff)/2; // S2
    // Just count the number of diff possible S2 subsets

    int dp[n+1][lsum+1];
    for(int i = 0; i < n+1; i++)
        dp[i][0] = 1;
    
    for(int j = 1; j < lsum+1; j++)
        dp[0][j] = 0;
    
    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < lsum+1; j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][lsum];
}
int main()
{
    int arr[] = {1, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = 1 ;
    cout << subsetCount(arr, n, diff) << endl;
}