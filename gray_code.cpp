#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
 
 
 
 
 
int main(){
    int n;
    cin >> n;
    vector<string>gc;
    gc.push_back("");
    for(int i = 0; i < n; i++){
        int size = gc.size();
        for(int j = size - 1; j >= 0; j--){
            gc.push_back(gc[j]);
        }
        for(int j = 0; j < size; j++){
            gc[j] += '0';
        }
        for(int j = size; j < size * 2; j++){
            gc[j] += '1';
        }
    }
    for(int i = 0; i < gc.size(); i++){
        cout << gc[i] << '\n';
    }
    return 0;
}