#include<iostream>
using namespace std;

int main(){

    int temp;
    int a[5] = {5,9,8,4,5};

    for(int i=0; i<5; i++){
        for (int j = 0; j < i; j++)
        {
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }

    cout<<"The Sorted Array",a;

    return 0;
}

// Array in Compiler is stored in the stack memory. The size of the array must be known at compile time.
//The array is allocated a contiguous block of memory, and each element can be accessed using its index. 
//The array is automatically deallocated when it goes out of scope.