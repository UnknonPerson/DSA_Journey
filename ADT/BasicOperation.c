#include<stdio.h>

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int Get(struct Array arr, int index){
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    }
    return -1;
}

int set(struct Array *arr, int index, int x){

    if(index < 0 && index > arr->length){
        return -1;
    }

    arr->A[index] = x;

    return x;

}

int Max(struct Array arr){
    int i , max = arr.A[0];

    for(i=0; i<arr.length; i++){
        if (max<arr.A[i])
        {
            max = arr.A[i];
        }
        
    }

    return max;
}

float Avg(struct Array arr){
    int i , sum = 0;
    for(i=0; i<arr.length; i++){
        sum = sum + i;
    }

    return sum/arr.length;
}

int main(){
    struct Array arr = {{2,3,4,5,6},20,5};

    set(&arr,1,99);
    printf("The Maximum value is %d",Max(arr));

    Display(arr);

    return 0;
}