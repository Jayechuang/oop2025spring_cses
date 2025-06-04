#include<bits/stdc++.h>
 
using namespace std;
 
long long min_dif = 1000000000;
int w[25];
int n;
 
void attempt(int i, bool g, long long g1, long long g2){
    if(i == n) min_dif = min(min_dif, abs(g1 - g2));
    else{
        if(g) g1 += w[i];
        else g2 += w[i];
        attempt(i + 1, !g, g1, g2);
        attempt(i + 1, g, g1, g2);
    }
}
 
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    attempt(0, 0, 0, 0);
    attempt(0, 1, 0, 0);
    cout << min_dif;
    return 0;
 
}