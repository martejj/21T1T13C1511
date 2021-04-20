#include "queue.h"
#include <stdio.h>

int main(void) {
    
    Queue q = createQueue();
    
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 15);
    
    printQueue(q);
    
    Queue q2 = createQueue();
    
    enqueue(q2, 1);
    enqueue(q2, 2);
    enqueue(q2, 3);
    enqueue(q2, 4);
    
    printQueue(q2);
    
    printf("%d\n", dequeue(q));
    printf("%d\n", dequeue(q));
    printf("%d\n", dequeue(q));
    printf("%d\n", dequeue(q));
    printf("%d\n", dequeue(q));
    
    return 0; 
}
