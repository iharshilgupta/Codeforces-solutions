#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
void solve(){
    string s;
    cin>>s;
    if(s.length()<=10){
        cout<<s<<"
";
        return;
    }
    int count=static_cast<int>(s.length())-2;
    cout<<s[0]<<count<<s[s.length()-1]<<"
";
}
int main() {
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}