#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct node *Node;

struct node {
    Node next;
    int data;
};

struct queue {
    Node head;
    Node tail;
};

Node createNode(int data);
void destroyNode(Node node);

Node createNode(int data) {
    Node new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

Queue createQueue() {
    Queue q = malloc(sizeof(struct queue));
    q->head = NULL;
    return q;
}

void enqueue(Queue q, int data) {
    
    Node new = createNode(data);
    
    if (q->head == NULL) {
        q->head = new;
        q->tail = new;
        return;
    }
    q->tail->next = new;
    q->tail = new;
    
}

void printQueue(Queue q) {
    Node curr = q->head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    
    printf("X\n");
}

int empty(Queue q) {
    return q->head == NULL;
}

int dequeue(Queue q) {
    
    if (q->head == NULL) {
        printf("You dumb dumb dont do that\n");
        return 0;
    }
    
    Node temp = q->head;
    q->head = q->head->next;
    
    int data = temp->data;
    free(temp);

    return data;
}

void destroyQueue(Queue q) {

}
