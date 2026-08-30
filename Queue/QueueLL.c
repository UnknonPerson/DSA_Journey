#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node *next;
}*head = NULL;
struct Node *tail = NULL;

void Insert(int x){
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->val = x;
    p->next = NULL;
    
}




int main(){


    return 0;
}