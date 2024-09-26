#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ar array

const int mxN=5e3;
string s, t;
int dp[mxN+1][mxN+1];

int main(){
    cin >> s >> t;
    for(int i=1; i<=s.size(); ++i)
       dp[i][0]=i;
    for(int j=1; j<=t.size(); ++j)
       dp[0][j] = j;
    for(int i=1; i<=s.size(); ++i){
        for(int j=1; j<=t.size(); ++j){
            dp[i][j]= 1e9;
            if(s[i-1]==t[j-1])
               dp[i][j]=dp[i-1][j-1];
            dp[i][j]=min({dp[i][j]-1, dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+1;
        }
    }
    cout << dp[s.size()][t.size()];
}

