#include<iostream>
#include<map>
#include<vector>
using namespace std;
 
int main(){
    int n, x, a;
    bool found = 0;
    vector<int> val;
    cin>>n>>x;
    map<int, int> num;
    for(int i = 1; i <= n; i++){
        cin>>a;
        val.push_back(a);
    }
    for(int i = 0; i < n; i++){
        int j = x - val[i];
        if(num.count(j)){
            cout << i + 1 << ' ' << num[j] + 1;
            found = 1;
            break;
        }
        num.insert({val[i], i});
    }
 
    if(!found) cout << "IMPOSSIBLE";
    return 0;
}