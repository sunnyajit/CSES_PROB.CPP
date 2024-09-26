#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=2e5;
int n, ans[mxN];
ar<int, 3> a[mxN];

int  main(){
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> a[i][1] >> a[i][0];
        a[i][2] = i;
    }
    sort(a, a+n);
    set<ar<int, 2>> s;
    for(int i=0; i<n; ++i){
        auto it = s.lower_bound({a[i][1]});
        if(it!=s.begin()){
              --it;
            ans[a[i][2]]=(*it)[1];
            s.erase(it);
        } else
             ans[a[i][2]] = s.size();
             s.insert({a[i][0],  ans[a[i][2]]});
    }
    cout << s.size() <<  "\n" ;
    for(int i=0; i<n; ++i)
       cout << ans[i]+1 << " ";

}
