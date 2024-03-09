#include <iostream>
using namespace std;

int main(){
    int n, i, result = 1;
    cin>>n;
    
    for( i = 2 ; i <= n ; i++)
        result *= i;
        
    cout<<result;
    
    return 0;
}