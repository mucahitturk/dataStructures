/*********************** Includes             *********************************/
#include "linkedlist.h"
#include "stdlib.h"
#include "stdio.h"
/*********************** Macros               *********************************/

/*********************** Defines              *********************************/

/*********************** Typedefs             *********************************/

/*********************** Variables            *********************************/

/*********************** Functions            *********************************/
enum linkedListStatus_e insertIndex(struct node_t** head, int data, int index) {


    struct node_t* newNode;
    struct node_t* currentNode;
    struct node_t* nextNode;
    if(getSize(*head) < index) {
        return LL_STATUS_ERROR;
    } 
    

    if (newNode == NULL) {
		return LL_STATUS_MEMORY; // Error: Memory allocation failed
	}
	newNode = (struct node_t*)malloc(sizeof(struct node_t));
	newNode->data = data;
	newNode->next = NULL;

    if(index == 0) {
        newNode->next = *head;
        *head = newNode;
    }
    else {
        currentNode = *head;
        for(int i = 0; i < index - 1; ++i) {
            currentNode = currentNode->next;
        }
        nextNode = currentNode->next;
        currentNode->next = newNode;
        newNode->next = nextNode;
    }
    return LL_STATUS_SUCCESS;
}
enum linkedListStatus_e insert(struct node_t** head, int data) {
	struct node_t* newNode = (struct node_t*)malloc(sizeof(struct node_t));
	if (newNode == NULL) {
		return LL_STATUS_MEMORY; // Error: Memory allocation failed
	}
	
	newNode->data = data;
	newNode->next = NULL;
	
	if (*head == NULL) {
		*head = newNode;
	}
	else {
		struct node_t* current = *head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
	
	return LL_STATUS_SUCCESS; // Success
}

enum linkedListStatus_e delete(struct node_t** head, int data){
	
	if (*head == NULL) {
		return LL_STATUS_EMPTY_LIST; // Error: Empty list
	}
	
	struct node_t* current = *head;
	struct node_t* prev = NULL;
	
	if (current->data == data) {
		*head = current->next;
		free(current);
		return LL_STATUS_SUCCESS; // Success
	}
	
	while (current != NULL && current->data != data) {
		prev = current;
		current = current->next;
	}
	
	if (current == NULL) {
		return LL_STATUS_NOT_FOUND; // Error: Element not found
	}
	
	prev->next = current->next;
	free(current);
	
	return LL_STATUS_SUCCESS; // Success
}

void display(struct node_t* head) {
	struct node_t* current = head;
	
	if (current == NULL) {
		printf("Linked list is empty.\n");
		return;
	}
	
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

int getSize(struct node_t* head) {
	int count = 0;
	struct node_t* current = head;
	
	while (current != NULL) {
		count++;
		current = current->next;
	}
	
	return count;
}

void reverse(struct node_t** head) {
	struct node_t* prev = NULL;
	struct node_t* current = *head;
	struct node_t* next = NULL;
	
	while (current != NULL) {
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
	}
	
	*head = prev;
}
