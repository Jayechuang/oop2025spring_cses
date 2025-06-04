#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    if(n % 4 == 3){
        cout << "YES\n";
        int diff = n - (n / 2);
        cout << n / 2 + 1 << '\n';
        int d = diff;
        for(int i = 1; i <= n; i += 2){
            if(d && i > 1){
                cout << i - 1 << ' ';
                d -= 2;
            }
            else cout << i << ' ';
        }
        d = diff;
        cout << '\n' << n / 2 << '\n';
        for(int i = 2; i <= n; i += 2){
            if(d){
                cout << i + 1 << ' ';
                d -= 2;
            }
            else cout << i << ' ';
        }
    }
    else if(n % 4 == 0){
        cout << "YES\n";
        int diff = n / 2;
        cout << n / 2 << '\n';
        int d = diff;
        for(int i = 1; i <= n; i += 2){
            if(d){
                cout << i + 1 << ' ';
                d -= 2;
            }
            else cout << i << ' ';
        }
        d = diff;
        cout << '\n' << n / 2 << '\n';
        for(int i = 2; i <= n; i += 2){
            if(d){
                cout << i - 1 << ' ';
                d -= 2;
            }
            else cout << i << ' ';
        }
    }
    else{
        cout << "NO\n";
    }
    return 0;
}