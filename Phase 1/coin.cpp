// total no of possible ways
#include <bits/stdc++.h>
using namespace std;
int main() {
  int num_denom;
  cout << "num of denominations:";
  cin >> num_denom;
  int amount;
  cout << "Enter amount:";
  cin >> amount;
  int coins[num_denom+1];
  coins[0] =0;
  cout << "Enter denominations:";
  for (int i = 1; i <=num_denom; i++) {
    cin >> coins[i];
  }
  long long arr[num_denom+1][amount+1];
  for(int i=0;i<=num_denom;i++)
    arr[i][0] = 1;
  // initializing first column of zero denominations
  for(int j=1;j<=amount;j++)
    arr[0][j] = 0;

  for(int i=1;i<=num_denom;i++)
  {
    for(int j=1;j<=amount;j++)
    {
      if(coins[i] > j)
        arr[i][j] = arr[i-1][j];
      else
        arr[i][j] = arr[i-1][j] + arr[i][j-coins[i]];
    }
  }
  cout << arr[num_denom][amount] << endl;
  return 0;
}
