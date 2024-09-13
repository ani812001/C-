#include <iostream>
using namespace std;

int main(){

// Pattern 1 !!

    /*int n = 4;
    for(int i = 1; i <= n ; i++){ //outer
        char ch = 'A';
        for (int j = 1; j<=n ; j++){ //inner
            cout << ch;
            ch = ch +1;

        }*/

// Pattern 2 !!

        /* int n = 4 ;

        int num = 1;

        for(int i=0; i<n; i++){
            for(int j=0; j<=n; j++){
                cout<<num << " ";
                num++;
            }
                 cout << endl;
        }
*/

//Pattern 3 !! ( Traingle Pattern .)

    /* int n = 4;
    
    for (int i = 0 ; i <n; i++){
        for (int j = 0; j<i+1; j++){
            cout<< "*";
        
        }
        cout << endl;

    }
*/

//Pattern 4 !! 

    /* int n = 4;
    for (int i = 0 ; i<n; i++){
        for (int j=0; j< i+1; j++){
            cout<<(i+1);
        }
        cout << endl;
    }*/


//Pattern 5 !!

    /* int n = 4; // Number of rows

    for (int i = 1; i <= n; ++i) {
        char ch = 'A' + (i - 1); // Calculate the character to print
        for (int j = 1; j <= i; ++j) {
            cout << ch; // Print the character
        }
        cout << endl; // Move to the next line after each row
    }
*/

//Pattern 6  (Forward traingle) !!

/* int n = 5;
for (int i =0; i<n; i++){
    for (int j = 1; j<=i+1 ; j++){
        cout<< j << " ";
    }
    cout<< endl;
}
*/

//Pattern 7 ( Reverse traingle)!!
   /*  int n = 4;
    for (int i = 0; i<n; i++){
        for (int j = i+1; j>=0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    */

//Pattern 6 (Floyd's Traingle Pattern)

   /* int n=4;
    int num = 1;
    for (int i = 0; i<n; i++){
        for(int j= i+1; j>0; j--){
            cout << num << " ";
            num ++;

        }
        cout << endl;
    }
    */

// Pattern 7 (Inverted Traingle Pattern)
    /* 
    int n = 4;

    
    for (int i=1; i<=n; ++i){

        for (int j=n; j>=i; --j){
            cout<< i;
        }

        cout << endl;
    }
    */

//Pattern 8 (inverted traingle pattern in character)
    
   /* int n = 4; // Number of rows

    for (int i = 1; i <= n; ++i) {
        char ch = 'A' + (i - 1); // Calculate the character to print
        for (int j = n; j >= i; --j) {
            cout << ch; // Print the character
        }
        cout << endl; // Move to the next line after each row
    }
*/

//Pattern 9 ( pyramid form)
/*  int n = 4; // Number of rows

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        // Print numbers
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << i;
        }
        cout << endl; // Move to the next line after each row
    } */


//Pattern 10 (Hollow Daimond)..

      /* 
      int n = 4; // Number of rows for the upper half

    // Upper half of the diamond
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        // Print hollow pattern
        for (int j = 1; j <= (2 * i - 1); ++j) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = n; j > i; --j) {
            cout << " ";
        }
        // Print hollow pattern
        for (int j = 1; j <= (2 * i - 1); ++j) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }
    */


//Pattern 11 (Butterfly Pattern )
int n = 4; // Number of rows for each half of the butterfly

    // Upper half of the butterfly
    for (int i = 1; i <= n; ++i) {
        // Print the left side stars
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Print the spaces between the two wings
        for (int j = 1; j <= (2 * n - 2 * i); ++j) {
            cout << " ";
        }
        // Print the right side stars
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; --i) {
        // Print the left side stars
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Print the spaces between the two wings
        for (int j = 1; j <= (2 * n - 2 * i); ++j) {
            cout << " ";
        }
        // Print the right side stars
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

