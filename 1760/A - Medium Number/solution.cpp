#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> arr;
    for(int i=0;i<a;i++){
        int b,c,d;
        cin>>b>>c>>d;
        vector<int> arr={b,c,d};
        sort(arr.begin(),arr.end());
        cout<<arr[1]<<"
";
    }
 
    return 0;
    
}