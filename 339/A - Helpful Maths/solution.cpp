#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char> answer;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            answer.push_back(s[i]);
        }
    }
    sort(answer.begin(),answer.end());
    for(int i=0;i<answer.size();i++){
        cout<<answer[i];
        if(i!=answer.size()-1){
            cout<<"+";
        }
    }
    return 0;
    
}