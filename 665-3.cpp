#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
     if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
int main(){
    int tc; cin >> tc;
    for(int i=0;i<tc;i++){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int count =0;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]) count++;
        }
        if(count ==n-1) {
            cout << "YES" << endl;
            continue;
        }
        int smallest =v[0];
        int j =0;
        for(int i=1;i<n;i++){
            if(v[i] < smallest){
                j = i;
                smallest = v[j];
        }
        }
        if(gcd(v[0],smallest) == 1 && smallest !=1){
            cout << "NO" << endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(gcd(v[i],smallest) == smallest){
                // smallest = v[j];
                swap(v[i],v[j]);
            }
        }
    
        count = 0;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]) count ++;
        }
        if(count == n-1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}