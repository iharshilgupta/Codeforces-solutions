#include <iostream>
using namespace std;
int main(){
    int y{0};
    cin>> y;
    for(int i=y+1;i<=9100;i++){
        int a=i/1000;
        int b=(i%1000)/100;
        int c=((i%1000))%100/10;
        int d=((i%1000)%100)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<i;
            break;
        }
    }
 
    return 0;
    
}