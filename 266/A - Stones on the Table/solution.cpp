#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string s;
    cin>>s;
    int total{0};
    for(int c=0;c<s.size()-1;c++){
        if(s[c]==s[c+1]) total++;
    }
    cout<<total;
    return 0;
    
}