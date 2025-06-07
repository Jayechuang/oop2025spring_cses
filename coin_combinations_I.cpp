#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
 
int mod = 1e9 + 7;
const int N = 1e6+10;
int n, x;
int coins[N];
long long dp[N];
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> x;
    for(int i = 0; i < n; ++i){
        cin >> coins[i];
    }
 
    sort(coins, coins + n);
    dp[0] = 1;
    for (int i = 1; i <= x; ++i) {
        for (int j = 0; j < n && coins[j] <= i; ++j) {
            dp[i] = (dp[i] + dp[i - coins[j]]);
        }
        dp[i] %= mod;
    }
 
    // for(int i = coins[0]; i <= x; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i >= coins[j]) {
    //             dp[i] += dp[i - coins[j]];
    //         }
    //         dp[i] %= mod;
    //     }
    // }
 
    cout << dp[x] << '\n';
    return 0;
}