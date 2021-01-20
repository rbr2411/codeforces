#include<iostream>
using namespace std;
int main()
{
    int num_coins;
    cout << "Enter the num of denominations: ";
    cin >> num_coins;
    cout << "Enter the denominations: ";
    int coins[num_coins+1];
    coins[0] = 0;
    //1st row is kept as a row of zero so that it is easier to copy
    for (int i = 1; i <= num_coins; i++)
    {
        cin >> coins[i];
        /* code */
    }
    int amount;
    cout<< "Enter the amount: ";
    cin >> amount;
    int a[num_coins+1][amount+1];
    a[0][0] = 1; // 1 way to return a sum of zero with zero coins
    for (int i = 1; i <=amount; i++)
    {
        a[0][i] = 0; // 0 ways to return a non-zero sum with 0 coins
    }
    for (int i = 1; i <= num_coins; i++)
    {
        /* code */
        a[i][0] = 1;
    }
    
    for (int  i = 1; i <=num_coins; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (j < coins[i])
                a[i][j] = a[i-1][j];
            else
                a[i][j] = a[i-1][j]+ a[i][j-coins[i]];
                // Exclude the coin. Include the coin. Add both
        }    
    }
    cout << a[num_coins][amount];
    return 0;  
}