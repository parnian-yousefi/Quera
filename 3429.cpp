#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    if(t < 0)
        cout<<"Ice\n";
    
    else if(t > 100)
        cout<<"Steam\n";
        
    else
        cout<<"Water\n";
    
    return 0;
}