#include<iostream>
using namespace std;

void Fibonaci(int a, int b,int n){
    int sum = a+b,temp = a;
    a=b;
    b=sum;
    n--;
    cout<<" "<<sum;
    if(n != 0){
        Fibonaci(a,b,n);
    }

}

int main(){

    int n , a=0 ,b=1;

    cout<<"Enter Palindrome Number :";
    cin>>n;

    cout<<a<<" "<<b;
    Fibonaci(a,b,n-2);
}