#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n, x;
    int weight[200005];
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>weight[i];
        
    }
    sort(weight, weight+n);
    int l = 0, r = n-1;
    while(l < r){
        if(weight[l] + weight[r] <= x){
            l++;
            r--;
            n--;
        }
        else{
            r--;
        }
    }
    cout<<n;
    return 0;
 
}