#include<iostream>
 
using namespace std;
 
int dp[1000005];
int coin[105];
int n;
 
int count(int x){
    bool valid = 0;
    for(int i = 1; i <= x; i++){
        valid = 0;
        for(int j = 0; j < n; j++){
            if(i - coin[j] >= 0 && dp[i - coin[j]] >= 0){
                valid = 1;
                dp[i] = min(dp[i], dp[i - coin[j]] + 1);
            }
        }
        if(!valid) dp[i] = -1;
        // cout<<i<<' '<<dp[i]<<'\n';
    }
    return dp[x];
}
 
int main(){
    for(int i = 0; i < 1000005; i++) dp[i] = 1000005;
    int x;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> coin[i];
        dp[coin[i]] = 1;
    }
    dp[0] = 0;
    cout << count(x);
    return 0;
 
}