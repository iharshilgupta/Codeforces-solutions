#include <iostream>
#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
int solve(){
    int n;
    cin>>n;
    int zero=0;
    vector<int> a(n);
    for(int &x:a){
        cin>>x;
        if(x==0) zero++;
    }
    if(a[0]==0 && a[n-1]==0){
        return 0;
    }
    if(a[0]==0 || a[n-1]==0){
        return zero>=2 ? 1 : -1;
    }
    return zero>=2 ? 2:-1;
    // int steps=0;
    // if(arr[0]!=0){
    //      for(int i=1;i<n;++i){
    //         if(arr[i]==0){
    //             swap(arr[0],arr[i]);
    //             steps+=i;
    //         }
    //         else{
    //             return -1;
    //         }
    //     }
    // }
    // if(arr[n-1]!=0){
    //     for(int i=n-1;i>=0;--i){
    //         if(arr[i]==0){
    //             swap(arr[n-1],arr[i]);
    //             steps+=i;
    //         }
    //     }
    // }
 
    // if(arr[0]==0 && arr[n-1]==0){
    //     return steps;
    // }
    // else{
    //     return -1;
    // }
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<"
";
    }
    return 0;
}