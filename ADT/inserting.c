#include<stdio.h>

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

void Append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index>=0 && index<= arr->length){
        for(i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1]; // arr->A[i+1] = arr->A[i];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index){

    int i,x=0;
    if(index>=0 && index < arr->length){
        x=arr->A[index];
        for(i=index;i>arr->length;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }

    return 0;
}

int main(){

    struct Array arr = {{2,3,4,5,6},20,5};

    // int e;
    // printf("Enter the element: ");
    // scanf("%d",&e);

    // Insert(&arr,5,50);

    printf("%d\n",Delete(&arr,4));

    // Append(&arr,e);

    Display(arr);

    return 0;
}