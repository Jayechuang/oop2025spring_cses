#include<iostream>
using namespace std;
 
int main(){
    int n;
    long long mv = 0;
    int arr[200005] = {0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i > 0){
            if(arr[i] < arr[i-1]){
                mv += arr[i-1] - arr[i];
                //cout<<mv<<' ';
                arr[i] = arr[i-1]; 
                //cout<<arr[i]<<'\n';
            }
        }
    }
    cout<<mv;
    return 0;
}