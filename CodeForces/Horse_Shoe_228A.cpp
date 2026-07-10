#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int ct{0};
    if(a==b || a==c || a==d) ct++;
    if(b==c || b==d) ct++;
    if(c==d) ct++;
    cout<<ct;
    return 0;
    
}