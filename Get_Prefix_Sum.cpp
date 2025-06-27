

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;cin>>n;
    vector<ll>v(n);
    vector<ll>nw(n);
    
    for(ll i=0; i<n; i++){
      cin>>v[i];
    }
    nw[0]=v[0];
    
    for(ll i=1; i<n; i++){
        nw[i] = nw[i-1]+v[i];
        // cout<<nw[i]<<" "; 
    }
    reverse(nw.begin(),nw.end());
    
    for(ll i=0; i<n; i++){
        
        cout<<nw[i]<<" "; 
    }
    


    
    return 0;
}