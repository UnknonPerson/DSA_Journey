#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front;
    int rare;
    int *Q;
};

void enqueue(struct Queue *Q, int x){
    if(Q->rare == Q->size-1){
        printf("Queue is Full");
    }else{
        Q->rare++;
        Q->Q[Q->rare] = x;
    }
}

int dequeue(struct Queue *Q){
    int x = -1;
    if(Q->front == Q->rare){
        printf("Queue is Empty");
    }else{
        Q->front++;
        x = Q->Q[Q->front];
    }
    return x;
}

void dispay(struct Queue *Q){
    printf("The Elements in Queue are :-\n");
    for(int i = Q->front + 1; i <= Q->rare; i++ ){
        printf("%d ",Q->Q[i]);
    }
}

int main(){
    int size,x,num;
    printf("Enter The size of Queue: ");
    scanf("%d",&size);

    struct Queue Q;
    Q.size = size;
    Q.front = -1;
    Q.rare = -1;
    Q.Q = (int *)malloc(sizeof(int)*size);

    while(1){
        int choise;
        printf("\n-------------Operations------------------\n");
        printf("1.To Dispay Queue.\n2.To Enqueue.\n3.To Dequeue.\n4.To Exite\n");
        printf("Enter Your Choise: ");
        scanf("%d",&choise);

        switch (choise)
        {
        case 1:
            dispay(&Q);
            break;

        case 2:
            printf("\nEnter the Value to Enter in a queue: ");
            scanf("%d",&num);
            enqueue(&Q,num);
            break;

        case 3:
            x = dequeue(&Q);
            printf("\n%d is dequed from the queue.",x);
            break;

        case 4:
            exit(1);
            break;
        
        default:
            break;
        }
    }

    return 0;
}