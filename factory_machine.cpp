#include<iostream>
#define ll long long
using namespace std;
 
int n;
 
int arr[200005];
 
ll produce(ll s){
    ll ans = 0;
    for(int i = 0; i < n; i++){ 
        ans += s / arr[i];
    }
    return ans;
}
ll BinarySearch(ll l, ll r, ll t){
    while(l <= r){
        ll m = l + (r - l) / 2;
        if(produce(m) >= t){
            if(produce(m - 1) < t) return m;
            else r = m - 1;
        }
        else if(produce(m) < t){
            if(produce(m + 1) >= t) return m + 1;
            else l = m + 1;
        }
    }
 
 
}
 
int main(){
    int t;
    cin >> n >> t;
    int m = 1e9;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m = min(m, arr[i]);
    }
    ll r = (ll)t * (ll)m;
    cout << BinarySearch(1, r, t);
    return 0;
}