#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin>>n;
    string s = "W";
    
    cin>>n;
    for(i= 0 ; i < n ; i++){
        s += 'o';
    }
    
    s += "w!";
    cout<<s;
    
    return 0;
}