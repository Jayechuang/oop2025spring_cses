#include<bits/stdc++.h>
using namespace std;
 
int n,t;
int a[200000]={0};
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	while(cin>>n){
		int k;
		for(int i=0;i<n-1;i++){
			cin>>k;
			a[k]=1;
		}
		for(int i=1;i<=n;i++){
			if(a[i]==0) {
				cout<<i;
				break;
			}
		}
	}
	return 0;
}