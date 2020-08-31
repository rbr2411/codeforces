#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
        cout << "1" << " " << n-1 << endl;
        for(int i=0;i<n-1;i++){
        if(v[i] %n !=0){
            if(v[i] < n){
            long long a = ((v[i] %n) * (n-1)) ;
            v[i] += a;
            cout << a << " " ;
            }
            else{
                long long a = ((n-(v[i] %n)) * (n-1)) ;
                v[i] = v[i]- a;
                cout << -1 * a << " " ;   
            }
        }
        else cout << "0"<< " ";
        }
        cout << endl;
        cout << n << " " << n << endl; 
        if(v[n-1] % n!=0){
            if(v[n-1] < n){
            long long a = ((v[n-1] %n) * (n-1)) ;
            v[n-1] += a;
            cout << a << endl;
        }
        else{
            long long a = ((n-(v[n-1] %n)) * (n-1)) ;
            v[n-1] =v[n-1] - a;
            cout << -1 * a << endl;
        }
        }
        else cout << "0" << endl;
        cout << "1" << " " << n << endl;
        for(int i=0;i<n;i++){
            cout << 0 - v[i] << " ";
        }
        cout << endl;
}