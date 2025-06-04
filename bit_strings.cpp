#include<iostream>
using namespace std;
#define M 1000000007
 
 
int main(){
    int n; 
    cin >> n;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= 2;
        ans %= M;
    }
    cout << ans;
    return 0;
}