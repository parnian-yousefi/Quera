#include <iostream>
using namespace std;

int main(){
    int d1, d2, d3;
    cin>>d1>>d2>>d3;
    
    if( d1 == 0 || d2 == 0 || d3 == 0)
        cout<<"No\n";
        
    else if( d1 == 180 || d2 == 180 || d3 == 180)
        cout<<"No\n";
        
    else if( d1 + d2 + d3 != 180 )
        cout<<"No\n";
        
    else
        cout<<"Yes\n";
    
    return 0;
}