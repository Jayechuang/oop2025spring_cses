#include<iostream>
using namespace std;
 
int main(){
    int t; 
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        long long sq = max(x, y);
        sq *= sq;
        if(sq % 2 == 0){
            if(x >= y) sq -= y - 1;
            else sq -= 2 * y - 1 - x; 
        }
        else{
            if(x >= y) sq -= 2 * x - 1 - y;
            else sq -= x - 1;
 
 
        }
        cout << sq << '\n';
 
 
    }
    return 0;
}