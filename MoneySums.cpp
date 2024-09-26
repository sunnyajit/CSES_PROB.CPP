#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ar array

const int mxN = 100, mxX=1e5;
int n, x[mxN], dp[mxX+1];

int main(){
    cin >> n;
    for(int i=0; i<n; ++i)
       cin >> x[i];
    dp[0]=1;
         for(int j=0; j<n; ++j)
    for(int i=mxX; i; --i)
         if(i>=x[j])
            dp[i]|= dp[i-x[j]];
    vector<int> ans;
    for(int i=1; i<=1e5; ++i)
       if(dp[i])
          ans.push_back(i);
    cout<<ans.size() << "\n";
    for(int a: ans)
       cout << a << " ";    
}