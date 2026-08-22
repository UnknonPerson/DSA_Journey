#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n)
{
    struct Node *p, *temp;

    p = (struct Node *)malloc(sizeof(struct Node));

    first = p;
    p->data = A[0];
    p->next = NULL;

    int i;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));

        temp->data = A[i];
        temp->next = NULL;

        p->next = temp;
        p = temp;
    }
}

void display(){
    struct Node *p =first;

    while(p != NULL){
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}


int main(){
    // first =(struct Node*) malloc(sizeof(struct Node));
    // first->data = 50;
    // first->next = NULL;

    // struct Node *second;
    // second = (struct Node*)malloc(sizeof(struct Node));
    // second->data = 60;
    // second->next = NULL;

    // first->next = second;

    // struct Node *third;
    // third = (struct Node*)malloc(sizeof(struct Node));
    // third->data = 70;
    // third->next = NULL;
    
    // second->next = third;

    int A[] = {10,20,30,40};

    create(A,4);

    display();

}