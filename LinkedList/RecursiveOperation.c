#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void display(struct Node *p){
    if(p!=NULL){
        printf("%d -> ",p->data);
        display(p->next);
    }
    

}