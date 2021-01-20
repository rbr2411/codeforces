#include <iostream>
#include <vector>
using namespace std;
long long fibonacci(int n)
{
	std::vector<long long> v(n);
	v[0] = 0;
	v[1] = 1;
	// using an array saves a lot of computation time.
	// recursion algorithm time complexity: O(2^n)
	// saving intermediate value for reuse rather than recomputing them is a part of 
	// dynamic approach to problem.
	// things once computed are not to be computed twice then.
	for(int i =2; i<n;i++)
	{
		v[i] = v[i-1] + v[i-2];
		//here we priorly know v[i-1] and v[i-2] 
		// so for each step we are only computing v[i] just by adding two known quantities
	}
	// time complexity: O(n)
	return v[n-1];
}
int main()
{
	int n;
	cin >> n;

	cout << fibonacci(n) ;
}