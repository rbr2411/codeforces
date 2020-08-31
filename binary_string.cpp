#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for(int i =0;i<tc;i++)
   {
       int n;
       cin >> n;
       if(n<=30)
        cout << "NO" << endl;
       else if(n>=31 && n<=35)
       {
           cout << "YES" << endl;
           cout << 6 << " " << 10 << " " << 14 << " " << n-30 << endl;
       }
       else if(n==36 || n==40 || n==44)
       {
           cout << "YES" << endl;
           cout << 6 << " " << 10 << " " << 15 << " " << n-31 << endl;
       }
       else if(n==37 || n==38 || n==39 || n==41 || n==42 || n==43)
       {
           cout << "YES" << endl;
           cout << 6 << " " << 10 << " " << 14 << " " << n-30 << endl;
       }
       else
       {
           cout << "YES" << endl;
           cout << 6 << " " << 10 << " "<< 14 <<" " << n-30 << endl;
       }
   }
}