#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int num_items;
	cout << "Enter num of items: ";
	cin >> num_items;
	cout << "Enter weights: ";
	int weights[num_items + 1];
	weights[0] = 0;
	for (int i = 1; i <= num_items; ++i)
	{
		/* code */
		cin >> weights[i];
	}
	cout << "Enter resp profits: ";
	int profits[num_items + 1];
	profits[0] = 0;
	for (int i = 1; i <= num_items; ++i)
	{
		/* code */
		cin >> profits[i];
	}
	cout << "Enter max weight that can be carried: ";
	int max_weight;
	cin >> max_weight;
	int a[num_items][max_weight + 1];
	// entries in matrix a would be profits
	for (int i = 0; i <= num_items; ++i)
	{
		/* code */
		a[i][0] = 0;
	}
	for (int i = 0; i <= max_weight; ++i)
	{
		/* code */
		a[0][i] = 0;
	}
	for (int i = 1; i <= num_items; ++i)
	{
		for (int j = 1; j <= max_weight; j++)
		{
			if (weights[i] > j)
			{
				a[i][j] = a[i - 1][j];
			}
			else
			{
				/* code */
				a[i][j] = max(a[i - 1][j], profits[i] + a[i - 1][j - weights[i]]);
			}

		}
	}
	cout << a[num_items][max_weight];

	return 0;
}