/*
  use_ll_2.c

  A main program that uses the linked list.

  To compile:
  gcc -c linkedlist.c
  gcc -c use_ll_2.c
  gcc -o ll2 linkedlist.o use_ll_2.o
*/

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void) {
    Node* front = (Node*) calloc(1, sizeof(Node));
    front->data = 42;
    front->next = (Node*) calloc(1, sizeof(Node));
    front->next->data = 9999;
    front->next->next = NULL;
    
    ll_print(front);
    printf("%d\n", ll_sum(front));
    
    return 0;
}
