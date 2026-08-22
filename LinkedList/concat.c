#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void concat(struct Node *first, struct Node *second)
{
    struct Node *p;
    p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = second;
    second = NULL;
}

struct Node* merging(struct Node *first, struct Node *second)
{
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    struct Node *third, *last;

    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = last = second;
        second = second->next;
        last->next = NULL;
    }

    while(first != NULL && second != NULL){
        if(first->data < second->data){
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }else{
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }

    if(first != NULL){
        last->next = first;
    }else{
        last->next = second;
    }

    return third;
}

int main()
{

    return 0;
}