#include<bits/stdc++.h>
using namespace std;
 
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n,q,x,a,b;
	while(cin>>n>>q){
		vector<long long> v(n+1,0);
		long long sum=0;
		for(int i=1;i<=n;i++){
			cin>>x;
			sum+=x;
			v[i]=sum;	
		}
		for(int i=0;i<q;i++){
			cin>>a>>b;
			cout<<v[b]-v[a-1]<<'\n';
		} 
	}
 
	return 0;
}