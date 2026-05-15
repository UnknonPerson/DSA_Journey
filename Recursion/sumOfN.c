#include<stdio.h>

int sum(int n){
    return (n==0)? 0:  n + sum(n-1);
}

int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);

    int s = sum(n);

    printf("The sum is %d",s);


}