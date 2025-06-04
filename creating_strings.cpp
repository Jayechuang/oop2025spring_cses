#include<bits/stdc++.h>
 
using namespace std;
 
string s, cur;
set<string> st;
bool vis[10];
 
void per(int cnt, int n){
    if(cnt == n){
        st.insert(cur);
    }
    else{
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                vis[i] = 1;
                cur.push_back(s[i]);
                per(cnt + 1, n);
                cur.pop_back();
                vis[i] = 0;
            }
        }
    }
}
 
int main(){
    cin >> s;
    int n = s.length();
    for(int i = 0; i < 10; i++) vis[i] = 0;
    per(0, n);
    cout << st.size() << '\n';
    for(auto i: st){
        cout << i << '\n';
    }
    return 0;
}