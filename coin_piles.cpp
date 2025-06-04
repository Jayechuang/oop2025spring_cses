#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int tot = l + r;
        int dif = abs(l - r);
        if(tot % 3 == 0 && dif <= tot / 3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}