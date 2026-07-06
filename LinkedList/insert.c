#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *first = NULL;
    
void insert(int data, struct Node *p)
{
    struct Node *temp;

    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = data;
    temp->next = NULL;

    if(first == NULL)
    {
        first = temp;
        return;
    }

    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = temp;
}

void display()
{
    struct Node *p = first;

    if (p == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");
}

int main(){

    insert(10,first);
    insert(20,first);
    insert(30,first);

    display();


    return 0;
}