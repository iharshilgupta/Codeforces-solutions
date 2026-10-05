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
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int right=n-1;
    int left=0;
    vector<int> ans;
    while(left<=right){
        ans.push_back(a[left]);
        left++;
        if(left<=right){
            ans.push_back(a[right]);
            right--;          
        }
 
    }
    for(int i=0;i<n;++i){
        cout<<ans[i]<<" ";
    }
    cout<<"
";
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