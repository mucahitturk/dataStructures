#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/*********************** Includes             *********************************/
#include "stdint.h"
/*********************** Macros               *********************************/
/*********************** Defines              *********************************/
/*********************** Typedefs             *********************************/
enum linkedListStatus_e
{
  LL_STATUS_SUCCESS = 0,
  LL_STATUS_MEMORY,
  LL_STATUS_NOT_FOUND,
  LL_STATUS_EMPTY_LIST,
  LL_STATUS_ERROR
};
// Linked list node structure
struct node_t
{
  uint16_t data;
  struct node_t   *next;
};
/*********************** Variables            *********************************/
/*********************** Functions            *********************************/
/**
 * @brief   Function to insert a new node at the end of the linked list.
 * @param   head: Pointer to the head of the linked list.
 * @param   data: Data value to be inserted.
 * @return  Error code indicating the status of the operation.
 */
enum linkedListStatus_e insert(struct node_t** head, int data);
/**
 * @brief   Function to insert a new node at the end of the linked list.
 * @param   head: Pointer to the head of the linked list.
 * @param   data: Data value to be inserted.
 * @param   index: index of the new list to be inserted.
 * @return  Error code indicating the status of the operation.
 */
enum linkedListStatus_e insertIndex(struct node_t** head, int data, int index); 
/**
 * @brief   Function to delete a node with the given data from the linked list.
 * @param   head: Pointer to the head of the linked list.
 * @param   data: Data value to be deleted.
 * @return  Error code indicating the status of the operation.
 */
enum linkedListStatus_e delete(struct node_t** head, int data);
/**
 * @brief   Function to reverse the linked list.
 * @param   head: Pointer to the head of the linked list.
 * @return  none.
 */
void reverse(struct node_t** head);
/**
 * @brief   Function to display the elements of the linked list.
 * @param   head: Pointer to the head of the linked list.
 * @return  none.
 */
void display(struct node_t* head);
/**
 * @brief   Function to get the size of the linked list.
 * @param   head: Pointer to the head of the linked list.
 * @return  Size of the linked list.
 */
int getSize(struct node_t* head);

#endif