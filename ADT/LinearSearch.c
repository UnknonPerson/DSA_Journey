#include<stdio.h>
#include<stdbool.h>

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i = 0;
    printf("\nArray Elements Are\n");
    for(i=0; i<arr.length; i++){
        printf("%d ",arr.A[i]);
    }
}

bool linearSearch(struct Array *arr,int x){
    int i;
    for(i=0; i<arr->length;i++){
        if(arr->A[i] == x){
            return true;
        }
    }
    return false;
}

int main(){

    struct Array arr = {{2,3,4,5,6},20,5};

    bool e = linearSearch(&arr , 99);

    printf("%d",e);
    

    return 0;
}