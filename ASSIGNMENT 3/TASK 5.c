#include <stdio.h>
#include <stdlib.h>



   // Function that accepts two integer pointers
  void swapNumbers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

  int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Pass the addresses of a and b
    swapNumbers(&a, &b);

    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
