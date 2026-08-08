#include <bits/stdc++.h>
using namespace std;
int main(){
    string fs,ss;
    cin>>fs>>ss;
    reverse(fs.begin(),fs.end());
    if(ss==fs){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
    
}