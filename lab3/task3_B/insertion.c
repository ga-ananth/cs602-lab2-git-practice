#include <stdio.h>

int insertion_sort(int A[], int size) {
   for (int i = 1; i < size ; i++) {
      int j = i;
      while (j >= 0 && A[j] < A[j-1]) {
         int temp = A[j];
         A[j] = A[j-1];
         A[j-1] = temp;
         j--;
      }
   }
}

int main() {
    int length = 8;
    int list[] = { 28, 4, 100, 9, 224, 111, 72, 53 };
    printf("unsorted list: \n");
    for (int i = 0; i < length; i++) {
        printf("%10d\n", list[i]);
    }
    insertion_sort( list, length );
    printf("list in order: \n");
    for (int i = 0; i < length; i++) {
        printf("%10d\n", list[i]);
    }
}

