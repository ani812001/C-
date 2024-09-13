#include <iostream>
using namespace std;

//function deination
/* 
int  printHello(){
    cout<<"hello\n";
    return 3;
}

int main(){
    //function call / invoke

    int val = printHello();
    cout << "val = " <<val << endl;
    */

// sum of 2 number
   /* 
   double sum (double a , double b){
    double s = a+b ;
    return s ;
   }

   int main(){
    cout << sum(10.99, 5.65 ) << endl;
    */

// min of 2 number
    /*
    int minOfTwo(int a , int b){
        if ( a<b){
            return a;

        }else{
            return b;
        }
    }

    int main(){
        cout<< "min =" << minOfTwo(5,3)<< endl; // arguments

        */


//sum of number 1 to N ..

       /*
       int sumN(int n){
        int sum = 0;

        for (int i = 1; i<=n; i++){
             sum+=i;

        }
       return sum;

    }
    int main() {
        cout<< sumN(5) << endl;
        cout<< sumN(10) << endl;
        */

// Factorial of a number 
/*
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i; // Multiply result by the current number
    }
    return result;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Call the factorial function and display the result
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
*/


int sumOfDigits(int num){
    int digSum = 0 ;

    while (num >0){
        int lastDig = num% 10; 
        num/= 10;

        digSum+= lastDig;

    }
    return digSum;
}
int main(){
    cout<< "sum =" << sumOfDigits(2356) << endl;
    

    return 0;
}

