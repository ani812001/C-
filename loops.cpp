#include <iostream>
using namespace std;

int main(){

    // Q. Loops 1

    /*int count = 1;

    while (count<=5){
        cout<<count<<"";
        count ++;
    }

    cout << endl;
    */

   //Q. Loops 2 ( 1 to some number upto which you want )... 

    /*
    int n = 20;
    int count = 1;

    while (count<=n){
        cout<<count<< " ";
        count ++;
    }

    cout << endl;
    */

   // Q . Loop 3 ( Sum Of odd no. 1 to N )

    int n = 10;
    
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }

    cout << endl;
    return 0;
}