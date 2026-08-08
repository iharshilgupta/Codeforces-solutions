#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> arr={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    string s="NO";
    for(int i=0;i<arr.size();i++){
        if(a%arr[i]==0 || a==arr[i]) {
            s="YES";
            break;
        }
    }
    cout<<s;
    return 0;
    
}