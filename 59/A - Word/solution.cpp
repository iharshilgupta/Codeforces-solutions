#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper=0;
    int lower=0;
    for(char c:s){
        if(isupper(c)) upper++;
        else lower++;
    }
    if(lower>=upper) {
         std::ranges::transform(s, s.begin(),[](unsigned char c){ return std::tolower(c); });
    }
    else{
         std::ranges::transform(s,s.begin(),[](unsigned char c){ return std::toupper(c); });
    }
    cout<<s<<endl;
    return 0;
    
}