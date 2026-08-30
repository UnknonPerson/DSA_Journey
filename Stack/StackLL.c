#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node *next;
}*head = NULL;
struct Node *top = NULL;

void push(int x){
    struct Node *p;
    p=(struct Node*)malloc(sizeof(int));
    if(!p){
        printf("Stack is Overflow");
        return;
    }
    p->val = x;
    p->next = NULL;
    if(!head){
        head = top =  p;
    }else{
        top->next = p;
        top = p;
    }
}

int Top(){
    return top->val;
}

void Display(){
    if(!head){
        printf("Stack is Empty...");
        return;
    }
    struct Node *p =head;
    
    while(p != top){
        printf("%d, ",p->val);
        p=p->next;
    }
    printf("%d",p->val);
}

int Pop(){
    int x;
    if(!head){
        printf("Stack is Empty.....");
        return x;
    }
    if(head == top){
        x = top->val;
        free(top);
        top = NULL;
        head = NULL;
    }
    struct Node *p = head;
    while(p->next != top){
        p = p->next;
    }
    x = top->val;
    free(top);
    top = p;
    top->next = NULL;
    return x;
}

int main(){

    printf("Stack is Created.");

    int x;
    while (1){
        printf("\n========Menue for Stack=============\n");
        printf("1.push\n2.for pop.\n3.To display top.\n4.Display stack.\n5.Exite.\n");
        printf("Enter your choise: ");
        int choise;
        scanf("%d",&choise);

        switch (choise)
        {
            case 1:
                printf("Enter The element to push: ");
                scanf("%d",&x);
                push(x);
                break;
            case 2:
                x = Pop();
                printf("%d Has been removed from stack",x);
                break;
            case 3:
                printf("%d is The top Element",Top());
                break;
            case 4:
                printf("The Elements are: \n");
                Display();
                break;
            case 5:
                printf("Exiting........");
                exit(1);
                break;
            default:
                printf("Invalid Input....");
                break;
        }
    }

    return 0;
}