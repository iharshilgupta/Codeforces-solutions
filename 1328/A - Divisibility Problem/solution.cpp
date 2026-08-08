#include <iostream>
using namespace std;
int main(){
    int t{0};
    long long int y{0};
    long long int z{0};
    cin>>t;
    for(int i=0;i<t;i++){
        cin>> y>> z;
         if(y%z==0){
            cout<<0<<"
";
         }
         else{
            cout<<z-(y%z)<<"
";
         }
    }
 
    return 0;
    
}