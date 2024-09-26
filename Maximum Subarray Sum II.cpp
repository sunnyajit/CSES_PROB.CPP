#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
const int mxN=2e5;
int n, a, b;
ll c[mxN+1];
 
 
int main(){
    cin >> n >> a >> b;
    for(int i=0; i<n; ++i){
        cin >> c[i+1];
        c[i+1]+=c[i];
    }
    set<ar<ll, 2>> s;
    ll ans = -1e18;
    for(int i=0; i<=n; ++i){
        if(i>=a)
           s.insert({c[i-a], i-a});
        if(s.size())
           ans=max(c[i]-(*s.begin())[0], ans);
        if(i>=b)
           s.erase({c[i-b], i-b});
    }
    cout << ans;
 
}
