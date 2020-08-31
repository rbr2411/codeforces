#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    for(int i=0;i<tc;i++){
        int x1,y1,z1,x2,y2,z2;
        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        int num = x1 + y1 + z1;
        int count = 0;
        if(x1 >= z2){
            num = num - z2;
            x1 = x1-z2;
            z2 = 0;
        }
        else if(z2 >= x1){
            num = num - x1;
            z2 = z2 - x1;
            x1 =0;
        }
        if(z1 >= y2) {
            count += 2 * y2;
            num = num - y2;
            z1 = z1 -y2;
            y2 = 0;
        }
        else if(y2 >= z1){
            count += 2 * z1;
            num = num - z1;
            y2 = y2 -z1;
            z1 = 0;
        }
        if(z2 > 0){
            if(z2 >= z1){
                z2 = z2 -z1;
                num = num - z1;
                z1 =0;
                count = count -2 * z2 ;
            }
            else{
                z2 =0;
                num = num - z2;
                z1 = z1 - z2;
            }
        }

        cout << count << endl;

    }
}