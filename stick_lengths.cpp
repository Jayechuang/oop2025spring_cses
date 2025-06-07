#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long long cost = 0;
    int len[200005];
    for(int i = 0; i < n; i++){
        cin >> len[i];
    }
    sort(len, len + n);
    int std = len[n / 2];
    for(int i = 0; i < n; i++){
        cost += abs(len[i] - std);
    }
    // cout << std << '\n';
    cout << cost;
    return 0;
}