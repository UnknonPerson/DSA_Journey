#include<stdio.h>

void Bubble(int A[], int n){
    int flag;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            flag = 0;
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
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

    printf("After Bubble Sort \n");
    Bubble(A,n);
    Display(A,n);

    return 0;
}