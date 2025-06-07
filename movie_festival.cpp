#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
 
using namespace std;
 
bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}
 
int main(){
    int n, a, b, cnt = 0;
    cin>>n;
    vector<pair<int, int>> movies;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        movies.push_back({a, b});
    }
    sort(movies.begin(), movies.end(), cmp);
    int time = 0;
    for(int i = 0; i < n; i++){
        if(movies[i].first >= time){
            cnt++;
            time = movies[i].second;
        }
    }
    cout<<cnt;
    return 0;
}