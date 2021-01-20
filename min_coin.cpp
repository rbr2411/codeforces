// Using DP
#include<iostream>
using namespace std;
int main()
{
    int num_coins;
    cout << "Enter num of denominations: ";
    cin >> num_coins;
    cout << "Enter the denominations: ";
    int coins[num_coins];
    for (int i = 0; i < num_coins; i++)
    {
        cin >> coins[i];
    }
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int a[num_coins][amount+1];
    //Entries of the array would be min no of coins for a given sum
    for (int i = 0; i < num_coins; i++)
    {
        a[i][0] = 0; // all entries in 1st col = 0
        /* code */
    }
    for (int i = 0; i < num_coins; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
           if (j < coins[i])
           {
               a[i][j] = a[i-1][j];
               /* code */
           }
           else
           {
               a[i][j] = min(a[i-1][j],1+a[i][j-coins[i]]);
           }
        }
        
    }
    cout << "Minimum no of coins required: "<< a[num_coins-1][amount];
    
    
}