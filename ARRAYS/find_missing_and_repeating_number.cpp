#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n;
    cin>>n;
    ll arr[n],sum=(n*(n+1))/2,sumsq=(n*(n+1)*(2*n+1))/6;
    for(ll i=0;i<n;i++) cin>>arr[i];
    for(ll i=0;i<n;i++){
        sum-=arr[i];
        sumsq-=arr[i]*arr[i];
    }
    ll x,y;

    x=(sumsq/sum+sum)/2;
    y=x-sum;
    cout<<"missing: "<<x<<" repeating: "<<y<<endl;
	return;
}
int main(){
    int t=1,z=1;
    // scanf("%d",&t);
    while(z<=t){
        solve(); z++;
    }
    return 0;
}
