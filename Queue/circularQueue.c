#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int front;
    int rare;
    int size;
    int *Q;
};

void enqueue(struct Queue *q, int x){
    if((q->rare+1)%q->size == q->front){
        printf("Queue is Full ");
    }else{
        q->rare = (q->rare+1)%q->size;
        q->Q[q->rare] = x;
    }
}

int dequeue(struct Queue *qe){
    int x = -1;
    if(qe->front == qe->rare){
        printf("Queue is empty ");
    }else{
        qe->front = (qe->front+1)% qe->size;
        x = qe->Q[qe->front];
    }

    return x;
}

void display(struct Queue *qe){
    printf("\nThe Elements in Queue are:- \n");
    int i = (qe->front+1)%qe->size;
    while( i != (qe->rare+1)%qe->size ){
        printf("%d ",qe->Q[i]);
        i = (i+1)%qe->size;
    }
}

int main(){
    int num;
    struct Queue qe;
    printf("Enter The size of Queue to br formed: ");
    scanf("%d",&qe.size);
    qe.Q= (int *)malloc(sizeof(int)*qe.size);
    qe.front = qe.rare = 0;

    while(1){
        int choise;
        printf("\n-------------Operations------------------\n");
        printf("1.To Dispay Queue.\n2.To Enqueue.\n3.To Dequeue.\n4.To Exite\n");
        printf("Enter Your Choise: ");
        scanf("%d",&choise);

        switch (choise)
        {
        case 1:
            display(&qe);
            break;

        case 2:
            printf("\nEnter the Value to Enter in a queue: ");
            scanf("%d",&num);
            enqueue(&qe,num);
            break;

        case 3:
            printf("\n%d is dequed from the queue.",dequeue(&qe));
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