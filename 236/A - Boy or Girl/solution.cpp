#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_set<char> unique;
    for(char c:s){
        unique.insert(c);
    }
    if(unique.size()%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
    
}