#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
 
multiset<int> tickets;
 
int n, m;
 
int main(){
    cin >> n >> m;
    int t, cus;
    for(int i = 0; i < n; i++){
        cin >> t;
        tickets.insert(t);
    }
    for(int i = 0; i < m; i++){
        cin>>cus;
        auto it = tickets.upper_bound(cus);
        if(it == tickets.begin()) cout<<"-1\n";
        else{
            cout << *(--it) <<'\n';
            tickets.erase(it);
 
        }
    }
    return 0;
    
        
}