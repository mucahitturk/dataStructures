/*********************** Includes             *********************************/
#include "queues.h"
/*********************** Macros               *********************************/

/*********************** Defines              *********************************/

/*********************** Typedefs             *********************************/

/*********************** Variables            *********************************/

/*********************** Functions            *********************************/
void Q_init(struct queue_t *queue){
    for (int i = 0; i < QUEUE_SIZE; ++i) {
        queue->data[i] = 0;
    }
    queue->front = -1;
    queue->rear = -1;
}
void Q_enqueue(struct queue_t *queue,int data){
    if(Q_isFull(*queue)){
        return;
    }
    else if(Q_isEmpty(*queue)){
        queue->rear = 0;    
        queue->data[queue->rear] = data;    
    }
    else{
        queue->rear++;
        queue->data[queue->rear] = data;
    }
    
}
int  Q_dequeue(struct queue_t *queue);
bool Q_isEmpty(struct queue_t queue) {
    if(queue.front == queue.rear){
        return true;
    }
    else{
        return false;
    }
}
bool Q_isFull(struct queue_t queue){

}
