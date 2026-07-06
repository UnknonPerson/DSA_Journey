#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

int main(){
    first =(struct Node*) malloc(sizeof(struct Node));
    first->data = 50;
    first->next = NULL;

    struct Node *second;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 60;
    second->next = NULL;

    first->next = second;

    struct Node *third;
    third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 70;
    third->next = NULL;
    
    second->next = third;

    printf("Value of First Node is %d",first->data);

}