#include <bits/stdc++.h>
#define ll long long
using namespace std;

 
int main()
{
    ll N;
    cin >> N;
    queue<ll> q;
    for (int i = 1; i <= N; i++){
        q.push(i);
    }

    bool flag = 0;
 
    while (!q.empty()){
        int ele = q.front();
        q.pop();
        if (flag){
            cout << ele << " ";
        }
        else{
            q.push(ele);
        }
        flag = !flag;
    }
    return 0;
}