#include <iostream>
using namespace std;

int main(){
    int t{0};
    cin >> t; // (1 ≤ t ≤ 10,0000)
    long long a{0};
    long long b{0};
    int c{0};
    for (int i{0}; i < t; i++){
        cin >> a >> b;
        if(a>=b){
            int r=a%b;
            if(r==0){
                c= 0;
                cout <<c<< endl;
            }
            else{
                c=b-r;
                cout <<c<< endl;
            }
        }
        else{
            c=b-a;
            cout <<c<< endl;
        }
    }
    return 0;

}