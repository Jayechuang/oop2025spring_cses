#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
 
using namespace std;
 
int main(){
    int n, m, k, a, b;
    int cnt = 0;
    cin>>n>>m>>k;
    vector<int> apt;
    vector<pair<int, int>> ppl;
    for(int i=0;i<n;i++){
        cin>>a;
        ppl.push_back({a-k, a+k});
    }
    for(int i=0;i<m;i++){
        cin>>b;
        apt.push_back(b);
    }
    sort(ppl.begin(), ppl.begin()+n);
    sort(apt.begin(), apt.begin()+m);
    int i=0, j=0;
    while(i<n && j<m){
        if(apt[j] >= ppl[i].first && apt[j] <= ppl[i].second){
            cnt++;
            i++;
            j++;
        }
        else if(apt[j] > ppl[i].second) i++;
        else if(apt[j] < ppl[i].first) j++;
        // cout<<i<<' '<<j<<'\n';
    }
    cout<<cnt;
    return 0;
 
 
 
 
}