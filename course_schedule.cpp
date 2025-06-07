#include<iostream>
#include<queue>
#include<vector>
 
using namespace std;
 
vector<int> graph[100005];
 
 
int main(){
    int n, m, a, b;
    vector<int> seq;
    int indeg[100005] = {0};
    bool vis[100005] = {0};
    queue<int> q;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        graph[a].push_back(b);
        indeg[b]++;
    }
    for(int i=1;i<=n;i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int now = q.front();
        q.pop();
        seq.push_back(now);
        vis[now] = 1;
        for(int nxt: graph[now]){
            indeg[nxt]--;
            if(indeg[nxt] == 0) q.push(nxt);
        }
    }
    bool flag = 1;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cout<<"IMPOSSIBLE";
            flag = 0;
            break;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            cout<<seq[i]<<' ';
        }
    }
    return 0;
 
 
}