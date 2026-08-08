#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string f="";
    string t="";
    int first_team=0;
    int second_team=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(f==""){
            f=s;
            first_team++;
        }
        else if(s==f){
            first_team++;
        }
        else{
            t=s;
            second_team++;
        }
    }
    if(first_team>second_team) cout<<f;
    else cout<<t;
    return 0;
    
}