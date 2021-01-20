#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    for(int i=0;i<tc;i++){
        int n; cin >> n;
        vector<int> v(n);
        for(int j=0;j<n;j++){
            cin >> v[j];
        }
        int operations =0;
        for(int j=0;j<v.size()-1;j++){
            if(v[j]!= v[j+1])
            {
                v[j] +=v[j+1];
                v.erase(v.begin()+j+1);
                operations++;
            }
        }
        cout << n - operations << endl;
    }
}