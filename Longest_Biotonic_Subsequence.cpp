#include <bits/stdc++.h>

#define ll int
#define rep(i,n) for(ll i=0;i<n;i++)
typedef vector<ll> vi;
#define all(v) v.begin(),v.end()

int longestBitonicSequence(vector<int>& v, int n) {
	ll ans=0;
    vi dp1(n,1),dp2(n,1);

    // vi hash(n,-1);

 reverse(all(v));


   for(int i=1;i<n;i++){
        rep(j,i){
            if(v[j]<v[i]){
                if(dp2[j]+1>dp2[i]){
                    dp2[i]=dp2[j]+1;
                    // hash[i]=j;
                }
            }
        }
    }
//     reverse(all(dp2));
    rep(i,n)ans=max(dp1[i]+dp2[i]-1,ans);

    // debug(ans);

      return (ans);
} 
