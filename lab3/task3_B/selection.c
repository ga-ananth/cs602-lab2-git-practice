#include <stdio.h>

int selection_sort(int A[], int size) {
   int i, j, max, temp;
   for (i = size-1; i > 0; i--) {
       max = 0;
       for (j = 1; j <=i ; j++) {
          if ( A[j] > A[max] )
             max = j;
       }
       temp = A[max];
       A[max] = A[i];
       A[i] = temp;
   }
}

int binary_search(int item, int A[], int size) {
      // searches for item in A[0], A[1], ..., A[size-1]
      // returns 1 if item is found, 0 if not
   int lo = 0;  // left end of possible range for item
   int hi = size;  // right end of possible range for item
   while (1) {
       if (hi < lo)
          return 0;  // not found
       int mid = (hi + lo) / 2;
       if (A[mid] == item)
          return 1;  // found
       if (item < A[mid])
          hi = mid-1;  // move hi to eliminate 2nd half of A
       else
          lo = mid+1;  // move lo to eliminate 1st half of A
   }
   return 0;
}

int main() {

    int list[] = { 100, 45, 89, 27, 317, 17 };
    printf("unsorted list: \n");
    for (int i = 0; i < 6; i++) {
        printf("%10d\n", list[i]);
    }
    selection_sort( list, 6 );
    printf("list in order: \n");
    for (int i = 0; i < 6; i++) {
        printf("%10d\n", list[i]);
    }
    printf("test if 42 is in the array...\n");
    if ( binary_search( 42, list, 6 ) )
       printf("     YES\n");
    else
       printf("     NO\n");
}

