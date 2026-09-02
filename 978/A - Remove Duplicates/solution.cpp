#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    set<int> order;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    vector<int> ans;
    for(int i=n-1;i>=0;--i){
        if(order.find(arr[i])==order.end()){
            order.insert(arr[i]);
            ans.push_back(arr[i]);
        }
    }
    cout<<order.size()<<endl;
    for(int i=ans.size()-1;i>=0;--i){
        cout<<ans[i] << (i==0 ?"" : " ");
    }
    cout<<endl;
    return 0;
}