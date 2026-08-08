// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
 
void check_div(int t){
    long long steps=0;
    long long n,k;
    cin>>n>>k;
    while(n>0){
        if(n%k==0){
            n/=k;
            steps++;
        }
        else{
            long long rem=n%k;
            steps+=rem;
            n-=rem;
        }
    }
    cout<<steps<<endl;
}
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        check_div(t);
    }
    return 0;
}