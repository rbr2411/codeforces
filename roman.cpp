#include <bits/stdc++.h>
using namespace std;
int charToInt(char c)
{
    if(c == 'I') return 1;
    else if(c == 'V') return 5;
    else if(c == 'X') return 10;
    else if(c == 'L') return 50;
    else if(c == 'C') return 100;
    else if(c == 'D') return 500;
    else return 1000;
}
int main()
{
    string s;
    cin >> s;
    int res = 0;
    int n = s.length();
    for(int i=0; i < n; i++)
    {
        int c1 = charToInt(s[i]);
        int c2 = 0;
        if(i + 1 < n)
            c2 = charToInt(s[i+1]);
        if(c1 < c2)
        {
            res += c2 - c1;
            i++;
        }
        else 
            res += c1;
    }
    cout << res << endl;
}