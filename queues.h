#ifndef QUEUES_H
#define QUEUES_H
// enqueue(x) 
// dequeue 
// front
// isEmpty
// isFull
// constant time or O(1)

/*********************** Includes             *********************************/
#include "stdbool.h"
/*********************** Macros               *********************************/

/*********************** Defines              *********************************/
#define QUEUE_SIZE 10
/*********************** Typedefs             *********************************/
struct queue_t{
    int data[QUEUE_SIZE];
    int rear;
    int front;
};
/*********************** Variables            *********************************/

/*********************** Functions            *********************************/
void Q_init(struct queue_t *queue);
void Q_enqueue(struct queue_t *queue,int data);
int  Q_dequeue(struct queue_t *queue);
bool Q_isEmpty(struct queue_t queue);
bool Q_isFull(struct queue_t queue);
#endif