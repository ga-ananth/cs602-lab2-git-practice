/*
  linkedlist.h

  Header for a simple linked list of integers.
*/

#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void ll_print(Node* front);
int ll_sum(Node* front);

#endif
