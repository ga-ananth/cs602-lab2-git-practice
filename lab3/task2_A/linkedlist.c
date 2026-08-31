/*
  linkedlist.c

  Implements a simple linked list of integers.
*/

#include <stdio.h>
#include "linkedlist.h"

void ll_print(Node* front) {
    while (front) {
        printf("A node: %d\t", front->data);
        front = front->next;
    }
    printf("\n");
}

int ll_sum(Node* front) {
    int sum = 0;
    while (front) {
        sum += front->data;
        front = front->next;
    }
    return sum;
}
