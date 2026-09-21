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
//   vector<int> arr(n);
//   int maxi=INT_MIN;
//   for(int i=0;i<n;++i){
//       cin>>arr[i];
//       maxi=max(maxi,n-arr[i]);
//   }
   int a,b,c;
   cin>>a>>b>>c;
   int mini=min({a,b,c});
   int weak= n-mini;
   cout<<weak<<"
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