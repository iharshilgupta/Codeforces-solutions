#include <iostream>
#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
long long solve(){
    long long x,y,k;
    cin>>x>>y>>k;
    long long diff=y-x;
    // long long emp=y/x;
    long long mono=0;
    long long i=0;
    for(;i<k && x+i<=diff;++i){
        mono+=(y+i)%(x+i);
    }
    mono+=(k-i)*diff;
    
    // long long mini=y-x; // minimum months to get the same remainder
    // long long months=0; // number of months monocarp will work 
    // long long fin=min(k,max(0LL,mini-x+1)) // important step
    
    // for(long long i=0;i<fin;++i){
    //     fin+=mini(x+i);
    // }
    // ans+=(k-fin)*mini;
    return mono;
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"
";
    }
    return 0;
}