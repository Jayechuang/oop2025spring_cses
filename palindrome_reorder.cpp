#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int cnt[26] = {0};
    for(int i = 0; i < s.size(); i++){
        cnt[(int)(s[i] - 'A')]++;
    }
    int odd = 0;
    int m = 26;
    for(int i = 0; i < 26; i++){
        if(cnt[i] % 2 != 0){
            odd++;
            m = i;
        }
        // cout << i << ' ';
    }
    if(odd > 1) cout << "NO SOLUTION";
    else{
        for(int i = 0; i < 26; i++){
            if(i != m){
                for(int j = 0; j < cnt[i]/2; j++) cout << (char)(i + 'A');
            }
        }
        if(odd > 0) for(int j = 0; j < cnt[m]; j++) cout << (char)(m + 'A');
        for(int i = 25; i >= 0; i--){
            if(i != m){
                for(int j = 0; j < cnt[i]/2; j++) cout << (char)(i + 'A');
            }
        }
    }
    return 0;
 
}