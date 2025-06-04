#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 
ll cnt_steps(int n){
    if(n == 1) return 1;
    else return 2 * cnt_steps(n - 1) + 1;
}
 
void print_steps(int n, int l, int m, int r){
    if(n == 0){
        return;
    }
    print_steps(n - 1, l, r, m);
    cout << l << ' ' << r << '\n';
    print_steps(n - 1, m, l, r);
}
 
int main(){
    int n;
    cin >> n;
    ll steps = cnt_steps(n);
    cout << steps << '\n';
    print_steps(n, 1, 2, 3);
    return 0;
 
}