#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    for(int i=0;i<tc;i++){
        int n; cin >> n;
        int k; cin >> k;
        if(n < k) cout << k-n << endl;
        else{
            if(n % 2 == 1 && k %2 ==1){
                cout << 0 << endl;
            }
            else if(n %2 == 1 && k%2==0){
                cout << 1 << endl;
            }
            else if(n %2 == 0 && k%2 ==1){
                cout << 1 << endl;
            }
            else cout << 0 << endl;
        }

    }
}