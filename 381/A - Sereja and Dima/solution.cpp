#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
int main() 
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int spoint=0;
    int dpoint=0;
    int left=0;
    int right=n-1;
    for(int i=0;i<n;++i){
        int maxi=max(arr[left],arr[right]);;
        if(i%2==0){
            spoint+=maxi;
            if(maxi==arr[left]) left++;
            else right--;
        }
        else{
            dpoint+=maxi;
            if(maxi==arr[left]) left++;
            else right--;
        }
    }
    cout<<spoint<<" "<<dpoint<<"
";
    return 0;
}