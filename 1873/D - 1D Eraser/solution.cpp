#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
void check(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int sec=0;
    for(int i=0;i<n;){
        if(s[i]=='B'){
            i+=k;
            sec++;
        }
        else{
            i++;
        }
    }
    cout<<sec<<"
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