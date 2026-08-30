#include<stdio.h>
#include<Stdlib.h>

struct Stack{
    int size;
    int top;
    int *p;
};

void Push(struct Stack *st, int x){
    if(st->top+1 == st->size){
        printf("Stack is Over Flow....");
        return;
    }
    st->top++;
    st->p[st->top] = x;
}

int Pop(struct Stack *st){
    int x = -1;
    if(st->top == -1){
        printf("Stacj is Underfloe...");
        return x;
    }
    x = st->p[st->top--];
    return x;
}

int Top(struct Stack st){
    int x = -1;
    if(st.top == -1){
        printf("Stack is Empty...");
        return x;
    }
    return st.p[st.top];
}

void Display(struct Stack st){
    if(st.top == -1){
        printf("The Stak is Empty...");
        return;
    }
    for(int i = 0; i <=st.top; i++){
        printf("%d",st.p[i]);
    }
}


int main(){
    int x;
    struct Stack st;
    printf("Enter the size of stack: ");
    scanf("%d",&st.size);

    st.top = -1;
    st.p = (int *)malloc(sizeof(int)*st.size);

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
            Push(&st,x);
            break;
        case 2:
            x = Pop(&st);
            printf("%d Has been removed from stack",x);
            break;
        case 3:
            printf("%d is The top Element",Top(st));
            break;
        case 4:
            printf("The Elements are: \n");
            Display(st);
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