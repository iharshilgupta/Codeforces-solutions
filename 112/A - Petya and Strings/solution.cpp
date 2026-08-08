#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    std::ranges::transform(s, s.begin(), [](unsigned char c){ return std::tolower(c); });
    std::ranges::transform(s1, s1.begin(), [](unsigned char c){ return std::tolower(c); });
    if(s<s1){
        cout << -1 << endl;
    } else if (s > s1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
    
}