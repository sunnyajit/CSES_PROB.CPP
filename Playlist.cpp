#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ar array

const int mxN = 2e5;
int n, p[mxN];

int main(){
    cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; ++i)
       cin >> p[i];
    int ans = 0;
    for(int i=0,j=0; i<n; ++i){
        while(j<n&&mp[p[j]]<1){
            mp[p[j]]++;
            ++j;
        }
        ans = max(j-i, ans);
        mp[p[i]]--;
    }
    cout << ans ;
}