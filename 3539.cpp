#include <iostream>
using namespace std;

int main(){
    unsigned long long int n, sum, i;
    
    cin>>n;
    
    sum = n;
    
    while( sum >= 10){
        n = sum;
        sum = 0;
        while (n > 0){
            sum += n % 10;
            n = n/10;
        }
    }
    
    cout<<sum<<endl;
    
    return 0;
}