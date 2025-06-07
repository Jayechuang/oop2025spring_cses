#include<iostream>
 
using namespace std;
 
long long dp[1000005];
 
int max_dig(int i){
    int ret = 0;
    while(i > 0){
        ret = max(ret, (i % 10));
        i /= 10;
    }
    return ret;
}
 
int main(){
    int n;
    cin >> n;
    dp[0] = 0;
    int maxdig;
    for(int i = 1; i <= n; i++){
        maxdig = max_dig(i);
        dp[i] = dp[i - maxdig] + 1;
    }
    cout << dp[n];
    return 0;
}