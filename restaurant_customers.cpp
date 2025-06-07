#include<iostream>
#include<map>
using namespace std;
 
int main(){
    int n, a, b, cnt = 0;
    map<int, bool> time;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        time.insert({a, 1});
        time.insert({b, 0});
    }
    int cur = 0;
    for(auto &t : time){
        if(t.second) cur++;
        else cur--;
        cnt = max(cnt, cur);
    }
    cout<<cnt;
    return 0;
}