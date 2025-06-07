#include<iostream>
 
using namespace std;
 
int mod = 1e9 + 7;
int dp[1000005] = {0};
int coins[1000005];
 
int main(){
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= x; j++){
            if(j - coins[i] >= 0){
                dp[j] += dp[j - coins[i]];
                dp[j] %= mod;
            }
        }
    }
    cout << dp[x];
    return 0;
 
}