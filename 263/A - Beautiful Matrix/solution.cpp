#include <bits/stdc++.h>
using namespace std;
int main(){
    int target;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>> target;
            if(target==1){
                int count=abs(i-3) + abs(j-3);
                cout<<count<<endl;
                return 0;
            }
        }
    }
    return 0;
    
}