#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MP make_pair
mt19937 rnd(time(0));
const int MAXN=2e5+5;
ll n,k,a[MAXN];
void solve(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) a[i]=i;
	if(k&1){cout<<"No\n";return;}
	int l=1,r=n;
	while(l<=r){
		if(k>=2*(r-l)) swap(a[l],a[r]),k-=2*(r-l),l++,r--;
		else r--;
	}
	if(k){
		cout<<"No\n";
	}else{
		cout<<"Yes\n";
		for(int i=1;i<=n;i++) cout<<a[i]<<" \n"[i==n];
	}
}
int main(){
	ios::sync_with_stdio(false);
	int _;cin>>_;
	while(_--) solve();
	return 0;
}