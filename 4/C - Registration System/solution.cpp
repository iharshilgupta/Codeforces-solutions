#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
int main() {
    unordered_map<string,int> freq;
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;++i){
        cin>>s;
        if(freq.count(s)==0){
            cout<<"OK
";
            freq[s]=1;
        }
        else{
            int a=freq[s];
            cout<<s <<a<<endl;
            freq[s]++;
        }
    }
    return 0;
}