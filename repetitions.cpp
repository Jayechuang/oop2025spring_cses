#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    string dna;
    cin>>dna;
    int len = dna.size();
    int cur = 1, maxlen = 0;
    for(int i=1;i<len;i++){
        if(dna[i-1] == dna[i]){
            cur++;
        }
        else{
            maxlen = max(cur, maxlen);
            cur = 1;
        }
    }
    maxlen = max(cur, maxlen);
    cout<<maxlen;
    return 0;
}