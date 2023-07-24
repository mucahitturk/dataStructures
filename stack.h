#ifndef STACK_H
#define STACK_H
/*********************** Includes             *********************************/
#include "stddef.h"
#include "stdbool.h"
/*********************** Macros               *********************************/

/*********************** Defines              *********************************/
#define STACK_SIZE 50
/*********************** Typedefs             *********************************/
struct stack_t{
    int buffer[STACK_SIZE];
    int index;
};
/*********************** Variables            *********************************/

/*********************** Functions            *********************************/
/**
 * @brief   Initializes a stack.
 * @param   head: Double pointer to the stack structure. 
 *               It will be initialized with a newly allocated stack.
 * @return  none
 */
void init(struct stack_t **stack);
/**
 * @brief   Removes and returns the top element from the stack.
 * @param   head:  Pointer to the stack structure from which the element will be removed.
 * @return  The value of the top element if the stack is not empty,
 *          otherwise returns a specific value indicating an empty stack (e.g., 0).
 */
int pop(struct stack_t *stack);
/**
 * @brief   Pushes an element onto the stack.
 * @param   head:Pointer to the stack structure where the element will be added.
 * @param   data:The integer value to be added to the stack.
 * @return  none
 */
void push(struct stack_t *stack, int data);
/**
 * @brief   Return the current size of the stack.
 * @param   head: Pointer to the stack structure whose size will be determined.
 * @return  The current number of elements in the stack.
 */
int getStackSize(struct stack_t *stack);
/**
 * @brief Checks if the stack is empty.
 * @param stack: Pointer to the stack structure to be checked.
 * @return true if the stack is empty, 
 *          false otherwise.
 */
bool isEmpty(struct stack_t *stack);
#endif