//dynamic programming approach.
//done
// dp most common approach: tabulation
// moving from 0 to w.(w+1) columns.and 0 to n items i.e. (n+1) rows.
//knapsack 0-1 problem. qty max<=1 for each item
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int wbag;
    cout << "Enter bag weight:";
    cin >> wbag;
    int n;
    cout << "No of items:";
    cin >> n;
    vector<pair<int, int>> items(n);
    for (int i = 0; i < n; i++)
        cin >> items[i].first >> items[i].second;
    //items[i].first -- weights
    //items[i].second -- price
    //sorting in ascending order of weights.
    sort(items.begin(), items.end());
    int arr[n + 1][wbag + 1]; //profit table 
    for (int i = 0; i <= n; i++)
        arr[i][0] = 0;
    for (int j = 1; j <= wbag; j++)
        arr[0][j] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= wbag; j++)
        {
            if (j < items[i - 1].first)
                arr[i][j] = arr[i - 1][j];
            else
                arr[i][j] = max(items[i - 1].second + arr[i - 1][j - items[i - 1].first], arr[i - 1][j]);
        }
    }
    cout << "Max profit:" << arr[n][wbag];
}