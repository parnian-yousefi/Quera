#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, twoPowers, i;
    
    cin>>n;
    
    for(i = 0 ; true ; i++){
        twoPowers = pow(2, i);
        if( twoPowers > n){
            cout<<twoPowers;
            break;
        }
    }
    
    return 0;
}