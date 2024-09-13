#include <iostream>
using namespace std;

/*
int main(){
    int marks[5] = {99, 100, 54, 36, 88};
    int size = 5;

    // int sz = sizeOf(marks)
    cout << sizeof(marks)/ sizeof(int) << endl;

    return 0;
    */

   int main(){
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;

    for (int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }

    cout<< "smallest = " << smallest << endl;
    return 0;
   }

