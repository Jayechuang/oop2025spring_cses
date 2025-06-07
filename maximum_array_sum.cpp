#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long long mx = -1000000005;
    int curnum;
    long long cursum = 0;
    for(int i = 0; i < n; i++){
        cin >> curnum;
        cursum += curnum;
        mx = max(mx, cursum);
        if(cursum < 0){
            cursum = 0;
        }
    }
    cout << mx;
    return 0;
}