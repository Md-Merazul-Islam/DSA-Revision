

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;cin>>n>>m;
    vector<int>v(n);for(auto&it:v)cin>>it;
    sort(v.begin(),v.end());
    while(m--){
        bool flag = false;
        int x;cin>>x;
        int l=0, r=n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if (v[mid]==x){
                flag=true;break;;
            }
            if(v[mid]<x ){
                l=mid+1;
            
            }else{
                r=mid-1;
            }
        }
        cout<<(flag?"found":"not found")<<endl;
    }

    
    return 0;
}