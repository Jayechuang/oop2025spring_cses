#include<iostream>
 
using namespace std;
 
int coins[105];
 
int main(){
    int dp[100005] = {0};
    int n, maxsum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> coins[i];
        maxsum += coins[i];
    }
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = maxsum; j >= 0; j--){
            if(j - coins[i] >= 0) dp[j] = max(dp[j], dp[j - coins[i]]);
        }
    }
    int sum = 0;
    for(int i = 1; i <= maxsum; i++){
        if(dp[i] != 0) sum++;
    }
    cout << sum << '\n';
    for(int i = 1; i <= maxsum; i++){
        if(dp[i] != 0) cout << i << ' ';
    }
    return 0;
 
}