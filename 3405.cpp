#include <iostream>
using namespace std;

int main(){
    int n[1001], count = 0, i;
    
    for(i = 0 ; true ; i++){
        cin>>n[i];
        if(n[i] == 0)
            break;
        count++;
    }
    
    for(i = count-1 ; i >= 0 ; i--)
    {
        cout<<n[i]<<endl;
    }
    
    return 0;
}