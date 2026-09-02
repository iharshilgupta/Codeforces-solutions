#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
int main() {
    string s;
    getline(cin,s);
    unordered_set<char> uniq;
    for(char c:s){
        if(c=='{' || c==' ' || c==',' || c=='}'){
            continue;
        }
        else{
            uniq.insert(c);
        }
    }
    cout<<uniq.size()<<endl;
    return 0;
}