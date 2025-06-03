#include<iostream>
 
using namespace std;
 
void alg(long long n){
    if(n == 1){
        return;
    }
    else if(n % 2 == 0){
        n /= 2;
        cout<<n<<' ';
        alg(n);
    }
    else{
        n *= 3;
        n += 1;
        cout<<n<<' ';
        alg(n);
    }
 
}
 
int main(){
    long long n;
    cin>>n;
    cout<<n<<' ';
    alg(n);
    return 0;
 
}