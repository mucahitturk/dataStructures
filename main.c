#include "stdio.h"
#include "stdlib.h"

#include "stack.h"

#define STACK_TEST   
/*
#include "linkedlist.h"
#define LINKED_LIST_TEST
struct node_t *head = NULL;
enum linkedListStatus_e llStatus;    
*/

int main(){
    #ifdef LINKED_LIST_TEST   
    llStatus = insert(&head,250);
    llStatus |= insert(&head,350);

    
    llStatus |= insertIndex(&head,50,0);
    llStatus |= insertIndex(&head,100,1);

    display(head);
    
    printf("%d\n",llStatus);
    #endif

    #ifdef STACK_TEST  
    struct stack_t *stack;
    init(&stack);
    push(stack,1);
    push(stack,2);
    push(stack,200);

    int size = getStackSize(stack);
    printf("size:%d\n",size);

    int data = pop(stack);
    printf("%d\n",data);
    data = pop(stack);
    printf("%d\n",data);
    data = pop(stack);
    printf("%d\n",data);

    size = getStackSize(stack);
    printf("size:%d\n",size);

    printf("isEmpty:%d\n",isEmpty(stack));
    #endif
    return 0;
}
