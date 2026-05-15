#include<stdio.h>
#include<stdlib.h>

struct array{
    int size;
    int *A;
    int length;
};

void display(struct array arr){
    int i;

    printf("\nElements are:\n");

    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

int main(){

    struct array arr;

    printf("Enter the size of array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    arr.length = 0;

    int i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n > arr.size){
        printf("Number of elements cannot exceed array size");
        return 0;
    }

    printf("Enter all the elements:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &arr.A[i]);
    }

    arr.length = n;

    display(arr);

    free(arr.A);

    return 0;
}