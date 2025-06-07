#include<iostream>
#include<set>
 
using namespace std;
 
int main(){
    int n, x, dis = 0;
    bool found = 1;
    set<int> num;
    cin>>n;
    while(n--){
        cin>>x;
        if(num.empty() || num.count(x) == 0){
            num.insert(x);
            dis++;
        }
    }
    cout<<dis;
    return 0;
}