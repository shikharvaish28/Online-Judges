#include <stdio.h>
#include <stdlib.h>

struct single_LL{
    int data;
    struct single_LL *next;
} *new_node, *previous, *head;

// insert the element at the end of the linked list
void append(struct single_LL **head_ref, int new_data){
    previous = *head_ref;
    // allocate the required size to new_node
    new_node = (struct single_LL*) malloc(sizeof(struct single_LL));
    // input in the new data
    new_node -> data = new_data;
    // since the 'new_node' would be the last node, init it as NULL
    new_node -> next = NULL;

    // if the linked list is empty, then make it as HEAD node too
    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    // traverse till last
    while(previous->next != NULL)
        previous = previous -> next;
    
    // Now, we have got the final previous one
    // change the last
        previous->next = new_node;
        
        return;
}

void push(struct single_LL **head_ref, int new_data){
    // allocate new node
    new_node = (struct single_LL*) malloc(sizeof(struct single_LL));
    // input the data
    new_node->data = new_data;
    // Make next of new node as head
    new_node->next = (*head_ref);
    // Move the head point to the new node
    (*head_ref) = new_node;    
}

void insertAfter(struct single_LL* prev_node, int new_data){
    // check if the previous node is not NULL i.e. the node is not the last one
    if (prev_node == NULL){
        printf("The given previous node is NULL");
        return;
    }
    // allocate space
    new_node = (struct single_LL*) malloc(sizeof(struct single_LL));
    // insert data first
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node->next =new_node;
}

void delete_key(struct Node **head_ref, int key) 
{ 
    // Store head node in temp
    struct single_LL* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 

/* Checks whether the value x is present in linked list */
int search(struct single_LL* head, int x)  
{  
    struct single_LL* current = head; // Initialize current  
    while (current != NULL)  
    {  
        if (current->data == x)  
            return 1;  
        current = current->next;  
    }  
    return 0;  
}

void printList(struct single_LL *node) 
{ 
    while (node != NULL) 
    { 
        printf(" %d \n", node->data); 
        node = node->next; 
    } 
} 

int main(){
    // start with a empty list; The head would be equal to NULL
    head = NULL;
    // 7 -> NULL
    append(&head, 7);
    // 7 -> 2 -> NULL
    append(&head, 2);
    // 12 -> 7 -> 2 -> NULL
    push(&head, 12);
    // 12 -> 7 -> 3 -> 2 -> NULL
    insertAfter(head->next, 3);
    //  12 -> 3 -> 2 -> NULL
    // delete_key(&head, 7);
    printList(head);
    if (search(head, 72) == 1){
        printf("YES\n");
    }
    else 
        printf("NO\n");
    return 0;
}