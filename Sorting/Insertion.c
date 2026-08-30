#include<stdio.h>

void Insertion(int A[], int n){
    for(int i = 1; i < n; i++ ){
        int j = i - 1;
        int x = A[i];
        while(j > -1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
    printf("\nInsertion Sort Done\n");
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
    Insertion(A,n);
    Display(A,n);

    return 0;
}