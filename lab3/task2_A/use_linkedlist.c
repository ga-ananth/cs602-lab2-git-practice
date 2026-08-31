/*
  use_linkedlist.c

  A main program that uses the linked list.
*/

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void) {
    Node* front = (Node*) calloc(1, sizeof(Node));
    front->data = 10;
    front->next = (Node*) calloc(1, sizeof(Node));
    front->next->data = 20;
    front->next->next = (Node*) calloc(1, sizeof(Node));
    front->next->next->data = 30;
    front->next->next->next = NULL;
    
    printf("booyah\n");
    ll_print(front);
    printf("%d\n", ll_sum(front));
    
    return 0;
}
