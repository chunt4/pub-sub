/* queue.c: Concurrent Queue of Requests */

#include "mq/queue.h"

/**
 * Create queue structure.
 * @return  Newly allocated queue structure.
 */
Queue * queue_create() {
    Queue *q = calloc(1, sizeof(Queue));
    if (q){
        q->head = NULL;
        q->tail = NULL;
        q->size = 0;

        mutex_init(&q->lock, NULL);
        cond_init(&q->producer, NULL);
        cond_init(&q->consumer, NULL);
        return q;
    } 
    return NULL;
}

/**
 * Delete queue structure.
 * @param   q       Queue structure.
 */
void queue_delete(Queue *q) {
}

/**
 * Push request to the back of queue.
 * @param   q       Queue structure.
 * @param   r       Request structure.
 */
void queue_push(Queue *q, Request *r) {
}

/**
 * Pop request to the front of queue (block until there is something to return).
 * @param   q       Queue structure.
 * @return  Request structure.
 */

// POP CAN BLOCK... check if the queue is empty
Request * queue_pop(Queue *q) {
    return NULL;
}

/* vim: set expandtab sts=4 sw=4 ts=8 ft=c: */
