#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a,int b)
{
	if(a == 0)
		return b;
	if(b == 0)
		return a;
	// Euclidean Algorithm
	while(a%b!= 0 && b%a!= 0)
	{
		if (a<b)
		{
			b = b % a;
			gcd(a,b);
		}
		else if(a>b)
		{
			a = a % b;
			gcd(a,b);
		}
	}
	return min(a,b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a,b) ;
}