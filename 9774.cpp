#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string n;
    int i, j, temp;
    
    cin>>n;
    
    for( i = 0 ; i < n.length() ; i++){
        cout<<n[i]<<": ";
        temp = n[i] - '0';
        for( j = 0 ; j < temp ; j++)
            cout<<temp;
        cout<<endl;
    }
    
    return 0;
}