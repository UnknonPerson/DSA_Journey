#include<iostream>
using namespace std;

int factorial(int n){
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main(){

    int n;

    cout<<"Enter The number : ";
    cin>>n;

    int fact = factorial(n);

    cout<<"The Factorial is "<<fact;
}