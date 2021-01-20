#include <bits/stdc++.h>
using namespace std;
int main()
{
    
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif
    int tc; 
    cin >> tc;
    for(int i=0;i<tc;i++)
    {
        int N,X;
        cin >> N;
        cin >> X;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        cout << "Case #" << i+1 << ": ";
        for(int i=0;A.size() !=0;)
        {
            if(A[i] > X)
            {
                A[i] -= X;
                A.push_back(A[i]);
                A.erase(A.begin() + i);
        
            }
            else if(A[i] <= X)
            {
                cout << i+1 << " ";
                A.erase(A.begin() + i);

            }
        }
        cout << endl;    
    }
}