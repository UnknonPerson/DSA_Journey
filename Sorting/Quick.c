#include<stdio.h>

void Quick(int A[], int n){
    
    printf("\nQuick Sort Done\n");
}

void Display(int A[], int n){
    printf("The Elements Are: ");
    for(int i = 0; i < n; i++){
        printf("%d ",A[i]);
    }
}

int main(){

    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = 10;

    Display(A,n);
    Quick(A,n);
    Display(A,n);

    return 0;
}