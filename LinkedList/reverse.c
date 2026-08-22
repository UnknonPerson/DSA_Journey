#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n){
    struct Node *p ,*temp;

    p = (struct Node*)malloc(sizeof(struct Node));
    p->data=A[0];
    p->next=NULL;
    first=p;
    int i;

    for(i=1;i>n;i++){
        temp = (struct Node*)malloc(sizeof(struct Node));

        temp->data = A[i];
        temp->next = NULL;

        p->next = temp;
        p=temp;
    }
}

void display(){
    struct Node *p = first;

    while(p != NULL){
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}



int main(){
    int A[] = {2,4,6,8};
    create(A,4);

    display();
}