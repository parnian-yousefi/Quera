#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    
    cin>>n;
    
    for( i = 1 ; i <= n ; i++){
        for( j = 1 ; j <= n ; j++){
            if( i % n == 1 || i % n == 0 || j % n == 1 || j % n == 0){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}