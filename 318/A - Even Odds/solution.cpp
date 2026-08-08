#include <iostream>
using namespace std;
int main(){
    long long a,b;// declaring the variables 
    cin>> a>> b; 
    long long o=(a+1)/2; // numbers of odds
    if(b<=o){
        cout<<2*b-1;
    }
    else{
        cout<<2*(b-o);
    }
    return 0;
    
}