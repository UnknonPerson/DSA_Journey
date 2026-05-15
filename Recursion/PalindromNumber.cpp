#include<iostream>
using namespace std;

int Rev(int num ,int rev){
    return rev * 10 + Rev(num/10,rev);
    //(num == 0)? rev : rev*10 + num%10;
    // if(num == 0)
    //     return rev;
    // }
    // else{
    //     rev = rev*10 + num%10;
    //     return Rev(num/10,rev);
    // }
}

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        cout<<"Enter you number : ";
        cin>>arr[i];
    }

    int biggest = arr[0];

    for(int i=1; i<5; i++){
        if(arr[i] > biggest){
            biggest = arr[i];
        }
    }
    cout<<"The biggest number is "<<biggest;
}