#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, i;
    
    cin>>n;
    
    for( i = 1 ; i <= n/2 ; i++ ){
        if( n % i == 0){
            sum += i;
        }
    }
    
    if( sum == n){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    
    return 0;
}