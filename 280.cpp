#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    
    cin>>a>>b>>c;
    
    a = pow(a,2);
    b = pow(b,2);
    c = pow(c,2);
    
    if( a + b == c || a + c == b || b + c == a)
        cout<<"YES";
        
    else
        cout<<"NO";
    
    return 0;
}