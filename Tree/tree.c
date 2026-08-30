#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Queue{
    int size;
    int rare;
    int front;
    struct Node **Q;
};

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rare = 0;
    q->Q = (struct Node**)malloc(sizeof(struct Node)*q->size);
}

void enqueue(struct Queue *q, struct Node *x){
    if((q->rare+1)%q->size == q->front){
        printf("Queue is Full ");
    }else{
        q->rare = (q->rare+1)%q->size;
        q->Q[q->rare] = x;
    }
}

struct Node *dequeue(struct Queue *qe){
    struct Node *x = NULL;
    if(qe->front == qe->rare){
        printf("Queue is empty ");
    }else{
        qe->front = (qe->front+1)% qe->size;
        x = qe->Q[qe->front];
    }

    return x;
}

int isEmpty(struct Queue q){
    return q.front == q.rare;
}

struct Node *root = NULL;

void createTree(){
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q,100);

    printf("Enter The value of root: ");
    scanf("%d",&x);
    root = (struct Node*)malloc(sizeof(struct Node));
    root->data=x;
    root->left = root->right = NULL;
    enqueue(&q, root);

    while (!isEmpty(q)){
        p=dequeue(&q);

        printf("Enter Left Child of %d: ",p->data);
        scanf("%d",&x);

        if(x != -1){
            t = (struct Node*)malloc(sizeof(struct Node));
            t->data = x;
            t->left = t->right = NULL;
            p->left = t;
            enqueue(&q, t);
        }

        printf("Enter Right Child of %d: ",p->data);
        scanf("%d",&x);

        if(x != -1){
            t = (struct Node*)malloc(sizeof(struct Node));
            t->data = x;
            t->left = t->right = NULL;
            p->right = t;
            enqueue(&q, t);
        }
    }
    
}

void preorder(struct Node *root){
    if(root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main(){

    createTree();
    preorder(root);
    return 0;
}