#include<iostream>
 
using namespace std;
 
int mod = 1e9 + 7;
 
int dp[1000005] = {0};
 
int main(){
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if((i - j) < 0) break;
            else dp[i] = (dp[i] + dp[i - j] % mod) % mod;
        }
    }
    cout << dp[n];
    return 0;
 
}  