#include <iostream>
#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
void check(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int ans=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]==1){
            ans++;
        }
    }
    // for(int i=0;i<arr.size();++i){
    //     int candi=arr[i];
    //     int next=arr[i+1];
    //     arr[0]=max(candi,next);
    //     arr.erase(arr.begin()+i+1);
    //
    // }
    if(ans>=(n+1)/2) cout<<"Bessie"<<"
";
    else{
        cout<<"Elsie"<<"
";
    }
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
        check();
    }
    return 0;
}