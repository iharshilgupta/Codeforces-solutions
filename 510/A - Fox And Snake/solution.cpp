#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int rc=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout<<"#";
            }
            else if(i%2!=0){
                if(rc%2==0){
                    if(j==0){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if(j==m-1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
        }
        cout<<endl;
        if(i % 2 != 0) {
            rc++;
        }
    }
    return 0;
    
}