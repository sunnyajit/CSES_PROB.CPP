#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e3;
int n;
ll x, a[mxN];

int main(){
    cin >> n >> x;
    for(int i=0; i<n; ++i)
      cin >> a[i];
    unordered_map<ll, ar<int, 2>> mp;
    for(int i=0; i<n; ++i){
        for(int  j=i+1; j<n; ++j)
           if(mp.find(x-a[i]-a[j])!=mp.end()){
            ar<int, 2> p=mp[x-a[i]-a[j]];
            cout << i+1 << " " << j+1 << " " << p[0]+1 << " "<< p[1]+1;
            return 0;
           }
           for(int j=0; j<i; ++j)
             mp[a[i]+a[j]]={i, j};
    }
    cout << "IMPOSSIBLE";
}
