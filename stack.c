/*********************** Includes             *********************************/
#include "stack.h"
#include <stdlib.h>
/*********************** Macros               *********************************/

/*********************** Defines              *********************************/

/*********************** Typedefs             *********************************/

/*********************** Variables            *********************************/

/*********************** Functions            *********************************/
void init(struct stack_t **stack) {

    *stack = (struct stack_t*)malloc(sizeof(struct stack_t));
    
    if(*stack == NULL) {
        return; //mem error
    }

    (*stack)->index = -1;
    for (int i = 0; i < STACK_SIZE; ++i) {
        (*stack)->buffer[i] = 0;
    }    
}
int pop(struct stack_t *stack) {
    if(stack == NULL) {
        return 0; // if stack is not init
    }
    if(stack->index == -1) {
        return 0; //stack is empty
    }
    int result = stack->buffer[stack->index];
    stack->buffer[stack->index] = 0;
    stack->index--;
    return result;
}
void push(struct stack_t *stack, int data) {
    if(stack == NULL) {
        return; // if stack is not init
    }
    if(stack->index == STACK_SIZE - 1){
        return;
    }    
    stack->buffer[++stack->index] = data;
}
int getStackSize(struct stack_t *stack) {
    return (stack->index + 1);
}
bool isEmpty(struct stack_t *stack){
    return stack->index == -1 ? true : false;
}