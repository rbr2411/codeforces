# include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    for(int i=0;i<tc;i++){
        int n; cin >> n;
        vector<string> v(n);
        map<char,int> mp;
        for(int j=0;j<n;j++){
            cin >> v[j];
            for(int k=0;k<v[j].length();k++){
                mp[v[j][k]]++;
            }
        }
        int flag =0;
        for(auto a:mp){
            if(a.second % n !=0){
                cout << "NO" << endl;
                break;
            }
            else flag =1;

        }
        if(flag==1) cout << "YES" << endl;
    }
}