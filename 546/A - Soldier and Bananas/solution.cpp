#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int banana,num;
    long long amount;
    cin>> banana>>amount>>num;
    int borrow{0};
    for(auto i=1;i<=num;i++){
        borrow+=banana*i;
    }
    if(amount>=borrow){
        cout<<0<<"
";
    }
    else{
        cout<<borrow-amount<<"
";
    }
    
 
    return 0;
    
}